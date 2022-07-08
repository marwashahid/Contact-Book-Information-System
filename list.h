#pragma once
#include<string>
#include<iostream>
template <class T>
class list {

	T* array;
	int count;
	int size;



public:
	list() {
		size = 10;
		count = 0;
		this->array = new T[size];


	}


	bool full()
	{

		if (count == size)
			return true;

		return false;
	}


	void resize()
	{

		size *= 2;

		T* temp = new T[size];

		for (int i = 0; i < size; i++) {

			temp[i] = array[i];
		}


		array = nullptr;
		array = temp;

	}

	void remove_item(int index) {


		
		/*array[index] = NULL;
     count--;
			*/

		

	}


	void add_item(T element) {

		if (full())
			resize();

		else this->array[count++] = element;
	}


	int get_count() {
		return count;
	}


	int get_size() {

		return size;
	}


	T* get_array() {

		return this->array;
	}


	void modify_item(T element, int index) {
		array[index] = element;
	}


};

