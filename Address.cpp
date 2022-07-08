#include "Address.h"


/*
*	Implement a constructor that initializes all the address parts
*
*/
Address::Address(std::string house, std::string street, std::string city, std::string country) {
	this->house = house;
	this->street = street;
	this->city = city;
	this->country = country;
}
/*
*	Implement getter/setters for all the member variables of Address. Also declare them in the Address.h header file
*
*/
//setters : 
void Address::set_house(std::string house) {


	this->house = house;

}


void Address::set_street(std::string street) {

	this->street = street;
}

void Address::set_city(std::string city) {

	this->city = city;

}

void Address::set_country(std::string country) {

	this->country = country;

}

//getters:
std::string Address::get_house() {
	return house;
}

std::string Address::get_street() {

	return street;

}

std::string Address::get_city() {
	return city;
}


std::string Address::get_country() {
	return country;
}


/*
*	Implement the equals function that takes an Address object and checks if it is equal to
*	current object refered by (this pointer)
*	Two addresses are equal if all the attributes of addresses are equal
*/
bool Address::equals(const Address& address)
{
	if (this->house == address.house && this->street == address.street && this->city == address.city && this->country == address.country)
		return true;

	else return false;

}

void Address::print_address()
{
	std::cout << "Address : " << house << " , " << street << " , " << city << " , " << country;
}

Address *Address::copy_address()
{

	Address* temp = new Address;
	temp->country = country;
	temp->house = house;
	temp->street = street;
	temp->city = city;

	return temp;
}
