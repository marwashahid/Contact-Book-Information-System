#pragma once
#include "Address.h"
#include "Contact.h"
#include"HistoryObject.h"
#include <fstream>
#include"list.h"
#include"Group.h"

#ifndef BASIC_LIB
#define BASIC_LIB
#include <iostream>
#include <string>
#endif // !BASIC_LIB


class ContactsBook {
private:
	Contact* contacts_list; 
	int size_of_contacts;   
	int contacts_count;    
	int county;
	HistoryObject Searched_history;			\
	list <Group> group_list;
public:
	void add_contact(Contact& contact);
	void add_contact_in_search(int id);
	int total_contacts();
	void set_size_of_list(int size);
	int get_county() {
		return this->county;
	}
	void add_group(std::string name);
	Contact* search_contact(std::string phone);
	int* get_frequently_searched_contacts();
	Contact* get_searched_contacts();
	void print_contacts();
	ContactsBook(int size_of_list);
	ContactsBook(const ContactsBook&);
	ContactsBook& operator = (Contact&);
	ContactsBook() {

		this->contacts_list = nullptr;
		this->size_of_contacts = 0;
		contacts_count = 0;

	}
	int get_words_count();
	std::string* get_time();
	void add_contact_in_grp(int index, int id);
	void update_contact(int  index, Contact contact);
	Group* get_group_list();
	int get_group_counts();
	Contact* get_contact_list();
	std::string* get_searched_strings();
	void print_contacts_sorted(std::string choice); // Only two choices first_name or last_name
	void merge_duplicates(); // Implement this function that finds and merges all the duplicates
	Contact* get_grp_contact_list(int index);					 // Duplicate means exact equal, this means if
	void delete_grp(int index) {
		group_list.remove_item(index);
	}
							 
	void  load_from_file(std::string file_name);
	void save_to_file(std::string file_name);
	void sort_contacts_list(Contact* contacts_list, std::string choice);
private:
	bool full();
	void resize_list();

};

