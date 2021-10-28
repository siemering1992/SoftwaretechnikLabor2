// global includes
#include <iostream>
#include <string>
// local includes
#include "defs.h"
#include "person.h"
#include "customer.h"
using namespace std;
// prototypes

void print(Customer);
// main function, no need to return anything
void main()
{
	// local variables
	Customer aPerson;
	int error;
	// set person's details
	aPerson.setName("Joe");
	aPerson.setSurname("Bloggs");
	aPerson.setAddress("Hauptstrasse", 21, "45220", "Klein Bollersen", "Deutschland");
	error = aPerson.setDob(29, FEB, 1980);

	// check if day matches month
	if (error)
	{
		// oops - no such day, what shall I do?!
		cout << "no such day" << endl;
	}
	else
	{
		// everything is fine, carry on ...

		print(aPerson);
	}
}

void print(Customer aPerson)
{
	//prints out all the person's details
	cout << aPerson;

}
