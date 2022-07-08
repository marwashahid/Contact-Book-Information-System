#pragma once
#include"list.h"
#include<string>
#include<iostream>
#include<ctime>

class HistoryObject
{


	list <int> searched_contacts;
	list <std::string> searched_words;
	list <std::string> Time;
private:

public:
	HistoryObject(){}
	
	std::string* get_time();
	int *get_objects();
	void set_time();
	std::string* get_searched_words();
	int get_words_count();
	void add_searchedContact(int id);
	void set_searched_word(std::string searched_str);
	int* frequently();

};


