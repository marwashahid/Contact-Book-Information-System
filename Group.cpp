#include"Group.h"


	Group::Group() {

	
		
		group_name = " ";

	}

	Group::Group(std::string grp_name) {
		this->group_name = grp_name;
		
	}

	std::string Group:: get_group_name() {

		return group_name;
	}
void Group::set_group_name(std::string name) {

		this->group_name = name;
	}
	int* Group::get_group_contacts() {

		return this->Group_contact_list.get_array();
	}
	
	int Group:: get_grp_contacts_count() {

		return this->Group_contact_list.get_count();


	}
	
	void Group::add_contact_in_group(int id) {

		Group_contact_list.add_item(id);

	}

	void Group::remove_contact(int id) {

		Group_contact_list.remove_item(id);

	}


