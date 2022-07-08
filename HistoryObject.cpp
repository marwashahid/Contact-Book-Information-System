#include<iostream>
#include<cstring>
#include<string>
#include"HistoryObject.h"
#include<ctime>


int* HistoryObject::get_objects()
{
	return searched_contacts.get_array();

}

int  HistoryObject::get_words_count() {

	return this->searched_words.get_count();

}

void HistoryObject::add_searchedContact(int id)
{
	searched_contacts.add_item(id);
	
	
}
void  HistoryObject::set_time() {


	time_t now = time(0);

	this->Time.add_item( ctime(&now));

}

std::string * HistoryObject :: get_time() {
	return Time.get_array();
}

void  HistoryObject::set_searched_word(std::string searched_str) {

	this->searched_words.add_item(searched_str);


}

std::string * HistoryObject::get_searched_words() {

	return this->searched_words.get_array();
}
int* HistoryObject::frequently() {

	int n = searched_contacts.get_count();
	
		int* element_having_max_freq = new int[5];
	int* maxcount = new int[5];
	int* arr = searched_contacts.get_array();

	for (int i = 0; i < 5; i++) {
		maxcount[i] = 0;
	}

	for (int i = 0; i < 5; i++) {


		for (int j = 0; j < n; j++)
		{
			int count = 0;
			for (int k = 0; k < n; k++)
			{
				if (arr[j] == arr[k])
					count++;
			}
			if (i == 0) {
				if (count > maxcount[i])
				{
					maxcount[i] = count;
					element_having_max_freq[i] = arr[j];
				}
			}

			else {

				if (count > maxcount[i] && count < maxcount[i - 1])
				{
					maxcount[i] = count;
					element_having_max_freq[i] = arr[j];
				}
			}

		}
	}


	return  element_having_max_freq;
}