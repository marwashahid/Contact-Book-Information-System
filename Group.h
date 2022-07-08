#pragma once
#include<iostream>
#include"list.h"
class Group {

	std::string group_name;
	list <int> Group_contact_list;

public:

	Group();
	Group(std::string grp_name);
	std::string get_group_name();
	void set_group_name(std::string name);
	int* get_group_contacts();
	void add_contact_in_group(int id);
	void remove_contact(int id);
	int get_grp_contacts_count();

};