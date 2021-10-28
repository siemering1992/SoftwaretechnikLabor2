#pragma once
#include <iostream>
#include "defs.h"

class Person
{
protected:
	string _name;
	string _surname;
	Date _dob;


public:

	void setName(string);
	string name();
	void setSurname(string);
	string surname();
	int setDob(unsigned int, MONTH, int);
	Date dob();

	Person();
	Person(string name, string surname, Date);

	// Überladung des << Operators
	friend ostream& operator << (ostream& os, Person aPerson)
	{
		cout << "Name: " << aPerson._name;
		cout << " " << aPerson._surname;
		cout << " DoB: " << aPerson._dob.day;
		cout << "." << aPerson._dob.month;
		cout << "." << aPerson._dob.year << endl;
		return os;
	}

};


