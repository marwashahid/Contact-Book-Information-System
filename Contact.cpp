#include "Contact.h"


#include"Address.h"



 int Contact::random = 4;
Contact& Contact::operator = (const Contact& obj) {


	this->first_name = obj.first_name;

	this->last_name = obj.last_name;

	this->email_address = obj.email_address;

	this->mobile_number = obj.mobile_number;

	this->address = new Address;

	this->Contact_id = Contact_id;
	this->address = obj.address;
	return *this;
	
}



Contact::Contact(std::string first_name, std::string last_name, std::string mobile_number, std::string email_address, Address* address) {

	
	//this->Contact_id = random++;
	set_first_name(first_name);
	set_last_name(last_name);
	set_mobile_number(mobile_number);
	set_email_address(email_address);
	set_address(address);

}

/*
*	Implement getter/setters for all the member variables of Contact. Also declare them in the Contact.h header file
*	In each setter, do not set value if string is empty ("" 0 size).
*   Check in phone number setter, Phone number must be 11 digits
*/


//setters :
void Contact::set_first_name(std::string first_name) {

	this->first_name = first_name;
}

void Contact::set_last_name(std::string last_name) {

	this->last_name = last_name;
}

void Contact::set_mobile_number(std::string mobile_number) {

	//if (mobile_number.length() < 11 || mobile_number.length() > 11)
	this->mobile_number = mobile_number;
	//else std::cout << "mobile number is invalid enter valid number";

}

void Contact::set_email_address(std::string email_address) {

	
		this->email_address = email_address;
	

}


void Contact::set_address(Address* adress) {


	this->address = new Address;

	this->address->set_house(adress->get_house());

	this->address->set_street(adress->get_street());

	this->address->set_city(adress->get_city());

	this->address->set_country(adress->get_country());



}
void Contact::set_contact_id(int id) {
	 
	this->Contact_id = id;

}
//getters:


std::string Contact::get_first_name() {
	return first_name;
}

std::string  Contact::get_last_name() {
	return last_name;
}

std::string  Contact::get_mobile_number() {
	return mobile_number;
}

std::string  Contact::get_email_address() {
	return email_address;
}

Address* Contact::get_address() {
	return this->address;
}

int Contact::get_Contact_id() {
	return Contact_id;
}


bool Contact::equals(Contact contact) {


	if (this->first_name == contact.first_name && this->last_name == contact.last_name && this->mobile_number == contact.mobile_number 
	//	this->email_address == contact.email_address 
		&& address->get_city() == contact.address->get_city() && contact.address->get_house() == address->get_house()
		&& contact.address->get_street() == address->get_street() && contact.address->get_country() == address->get_country())
		return true;

	else return false;



}

Contact* Contact::copy_contact()
{
	Contact* temp = new Contact;

	*temp->address = *address;
	temp->email_address = email_address;
	temp->first_name = first_name;
	temp->last_name = last_name;
	temp->mobile_number = mobile_number;

	return temp;
}
