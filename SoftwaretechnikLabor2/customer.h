
#pragma once
#include <iostream>
#include "defs.h"
#include "person.h"

class Customer : public Person
{
private:
	Address _address;
	unsigned int _id;

public:

	void setAddress(string, unsigned int, string, string, string);
	Address address();
	void setId(unsigned int);
	unsigned int id();

	// Überladung des << Operators
	friend ostream& operator << (ostream& os, Customer aCustomer)
	{
		cout << "Name: " << aCustomer._name;
		cout << " " << aCustomer._surname;
		cout << " DoB: " << aCustomer._dob.day;
		cout << "." << aCustomer._dob.month;
		cout << "." << aCustomer._dob.year << endl;
		cout << aCustomer._address.street << " " << aCustomer._address.number << ", ";
		cout << aCustomer._address.postcode << " " << aCustomer._address.city << ", ";
		cout << aCustomer._address.country << endl;
		return os;
	}

};
