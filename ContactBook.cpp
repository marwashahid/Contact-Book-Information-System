#include "ContactsBook.h"

std::fstream contactfile;


ContactsBook::ContactsBook(int size_of_list)
{


	contacts_count = 0;
	
	size_of_contacts = size_of_list;
	contacts_list = new Contact[size_of_list];


}

int ContactsBook::get_words_count() {
	return this->Searched_history.get_words_count();
}
std::string* ContactsBook::get_searched_strings() {

	int count = 0;
	std::string* words = this->Searched_history.get_searched_words();
	int words_count = Searched_history.get_words_count();
	
	std::string *key_words = new std::string[words_count];


	for (int i = words_count-1; i > -1; i--) {
		key_words[i] = words[count++];
	}

	return key_words;

}
std::string* ContactsBook::get_time() {

	int count = 0;
	std::string* time = this->Searched_history.get_time();
	int words_count = Searched_history.get_words_count();

	std::string* time1 = new std::string[words_count];


	for (int i = words_count-1; i > -1; i--) {
		time1[i] = time[count++];
	}

	return time1;

}
Contact* ContactsBook::get_grp_contact_list(int index) {



	int* ids;
	Group* ok = this->group_list.get_array();

	ids = ok[index].get_group_contacts();

	Contact* cont = new Contact[10];

	for (int i = 0; i < this->group_list.get_array()[index].get_grp_contacts_count(); i++) {

		if (ids[i] == contacts_list[i].get_Contact_id())
			cont[i] = contacts_list[i];

	}

	return cont;
}

void  ContactsBook::add_contact_in_grp(int index, int id) {

	Group* list = this->group_list.get_array();

	list[index].add_contact_in_group(id);

	group_list.modify_item(list[index], index);

}
void ContactsBook::add_group(std::string name) {
	Group temp(name);
	this->group_list.add_item(temp);

}
Group* ContactsBook::get_group_list() {

	return this->group_list.get_array();

}
int  ContactsBook::get_group_counts() {

	return this->group_list.get_count();

}

ContactsBook::ContactsBook(const ContactsBook& c) {


	this->contacts_count = c.contacts_count;
	this->size_of_contacts = c.size_of_contacts;
	this->contacts_list->set_first_name(c.contacts_list->get_first_name());
	this->contacts_list->set_last_name(c.contacts_list->get_last_name());
	this->contacts_list->set_mobile_number(c.contacts_list->get_mobile_number());
	this->contacts_list->set_email_address(c.contacts_list->get_email_address());
	this->contacts_list->set_address(c.contacts_list->get_address());
	this->Searched_history = c.Searched_history;


}

ContactsBook& ContactsBook::operator = (Contact& contact) {
	this->contacts_list->set_first_name(contact.get_first_name());
	this->contacts_list->set_last_name(contact.get_last_name());
	this->contacts_list->set_mobile_number(contact.get_mobile_number());
	this->contacts_list->set_email_address(contact.get_email_address());
	this->contacts_list->set_address(contact.get_address());
	return *this;
}
void ContactsBook::set_size_of_list(int size) {

	size_of_contacts = size;
	contacts_list = new Contact[size];


};

void ContactsBook::add_contact(Contact& contact)
{

	if (full())
		resize_list();

	contacts_list[contacts_count++] = contact;


}
Contact* ContactsBook::get_contact_list() {

	return this->contacts_list;


}
int ContactsBook::total_contacts()
{

	return contacts_count;
}

bool ContactsBook::full()
{


	if (contacts_count == size_of_contacts)
		return true;

	return false;
}

void ContactsBook::resize_list()
{



	size_of_contacts *= 2;

	Contact* temp = new Contact[size_of_contacts];

	for (int i = 0; i < contacts_count; i++) {

		temp[i] = contacts_list[i];
	}


	contacts_list = nullptr;
	contacts_list = temp;

}



void ContactsBook::update_contact(int index, Contact contact) {


	this->contacts_list[index].set_first_name(contact.get_first_name());
	this->contacts_list[index].set_last_name(contact.get_last_name());
	this->contacts_list[index].set_mobile_number(contact.get_mobile_number());
	this->contacts_list[index].set_email_address(contact.get_email_address());
	this->contacts_list[index].set_address(contact.get_address());
}
Contact* ContactsBook::search_contact(std::string searched_string)
{


	int* ids = new int[contacts_count];

	int count_of_searches = 0;
	for (int i = 0; i < contacts_count; i++) {

		if (contacts_list[i].get_first_name().find(searched_string) != std::string::npos || contacts_list[i].get_last_name().find(searched_string) != std::string::npos || contacts_list[i].get_email_address().find(searched_string) != std::string::npos
			|| contacts_list[i].get_mobile_number().find(searched_string) != std::string::npos || contacts_list[i].get_address()->get_house().find(searched_string) != std::string::npos || contacts_list[i].get_address()->get_street().find(searched_string) != std::string::npos
			|| contacts_list[i].get_address()->get_city().find(searched_string) != std::string::npos || contacts_list[i].get_address()->get_country().find(searched_string) != std::string::npos)
		{
			ids[i] = contacts_list[i].get_Contact_id();
			count_of_searches++;
		}

	}
	Searched_history.set_searched_word(searched_string);
	Searched_history.set_time();
	this->county = count_of_searches;
	Contact* temp = new Contact[count_of_searches];

	int count1 = 0;

	for (int i = 0; i < contacts_count; i++) {
		if (ids[i] == contacts_list[i].get_Contact_id()) {
			temp[count1] = contacts_list[i];
			count1++;
		}
	}


	return temp;
}
void ContactsBook::add_contact_in_search(int id) {

	this->Searched_history.add_searchedContact(id);

}
Contact* ContactsBook::get_searched_contacts() {

	int count = Searched_history.get_words_count();
	
	Contact* temp = new Contact[count];

	int* ids = Searched_history.get_objects();

	for (int i = 0; i < count; i++) {
		if (ids[i] == contacts_list[i].get_Contact_id()) {
			temp[i] = contacts_list[i];
		}
	}

	return temp;
}

int* ContactsBook::get_frequently_searched_contacts() {

	return this->Searched_history.frequently();

}

void ContactsBook::print_contacts_sorted(std::string choice)
{

	Contact* list;

	list = new Contact[contacts_count];

	for (int i = 0; i < contacts_count; i++) {

		list[i] = contacts_list[i];
	}

	sort_contacts_list(list, choice);

	for (int i = 0; i < contacts_count; i++) {

		std::cout << std::endl << "Name : " << list[i].get_first_name() << "  " << list[i].get_last_name() << "  phone :  " << list[i].get_mobile_number() << "  Email : " << list[i].get_email_address() << std::endl << std::endl;
		std::cout << " Address : ";
		list[i].get_address()->print_address();
	}

}
void ContactsBook::print_contacts() {

	for (int i = 0; i < contacts_count; i++) {

		std::cout << std::endl << "Name : " << contacts_list[i].get_first_name() << "  " << contacts_list[i].get_last_name() << "  phone :  " << contacts_list[i].get_mobile_number() << "  Email : " << contacts_list[i].get_email_address() << std::endl << std::endl;
		std::cout << " Address : ";
		contacts_list[i].get_address()->print_address();
	}

}

void ContactsBook::sort_contacts_list(Contact* cont_list, std::string choice) {
	for (int i = 0; i < contacts_count; i++) {
		for (int j = i + 1; j < contacts_count; j++) {
			if (choice == "First Name" && cont_list[i].get_first_name() > cont_list[j].get_first_name()) {
				std::swap(cont_list[i], cont_list[j]);
			}
			else if (choice == "Last Name" && cont_list[i].get_last_name() > cont_list[j].get_last_name()) {
				std::swap(cont_list[i], cont_list[j]);
			}
		}
	}
}






	void ContactsBook::merge_duplicates()
	{

		for (int i = 0; i < size_of_contacts; i++)
		{
			for (int j = i + 1; j < size_of_contacts; j++)
			{
				if (contacts_list[i].get_first_name() == contacts_list[j].get_first_name() || contacts_list[i].get_last_name() == contacts_list[j].get_last_name() || contacts_list[i].get_mobile_number() == contacts_list[j].get_mobile_number() || contacts_list[i].get_email_address() == contacts_list[j].get_email_address() || contacts_list[i].get_address() == contacts_list[j].get_address())
				{
					contacts_list[j].set_first_name("0");
					contacts_list[j].set_last_name("0");
					contacts_list[j].set_mobile_number("0");
					contacts_list[j].set_email_address("0");
					Address obj;
					obj.set_city("0");
					obj.set_country("0");
					obj.set_street("0");
					obj.set_house("0");
					contacts_list[j].set_address(&obj);
					contacts_count--;
				}
			}

		}


	}


void ContactsBook::load_from_file(std::string file_name) {
	contactfile.open(file_name, std::ios::in);
	if (!contactfile.is_open()) {
		return ;
	}
	else {
		Address address;
		std::string input;
		
		contactfile >> this->contacts_count;
		//set_size_of_list(size_of_contacts);
		for (int i = 0; i < contacts_count; i++) {
			contactfile >> input;
			this->contacts_list[i].set_first_name(input);
			contactfile >> input >> input;
			this->contacts_list[i].set_last_name(input);
			contactfile >> input >> input;
			this->contacts_list[i].set_mobile_number(input);
			contactfile >> input >> input;
			this->contacts_list[i].set_email_address(input);
			contactfile >> input;
			address.set_house(input);
			contactfile >> input >> input;
			address.set_street(input);
			contactfile >> input >> input;
			address.set_city(input);
			contactfile >> input >> input;
			address.set_country(input);
			this->contacts_list[i].set_address(&address);
		}
	}
}

void ContactsBook::save_to_file(std::string file_name) {
	contactfile.open(file_name, std::ios::out);
	if (!contactfile.is_open()) {
		std::cout << "File not opened " << std::endl;
	}
	else {
		
		contactfile << contacts_count << std::endl;
		for (int i = 0; i < contacts_count; i++) {
			contactfile << contacts_list[i].get_first_name() << " , " << contacts_list[i].get_last_name() << " , " << contacts_list[i].get_mobile_number() << " , " << contacts_list[i].get_email_address() << std::endl;
			contactfile << contacts_list[i].get_address()->get_house() << " , " << contacts_list[i].get_address()->get_street() << " , " << contacts_list[i].get_address()->get_city() << " , " << contacts_list[i].get_address()->get_country() << std::endl;
		}
		contactfile.close();
	}
}
