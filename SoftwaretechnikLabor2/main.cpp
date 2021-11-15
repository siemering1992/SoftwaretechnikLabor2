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
int main()
{
	// local variables
	Customer aPerson;
	// set person's details
	try
	{
		aPerson.setName("Joe");
		aPerson.setSurname("Bloggs");
		aPerson.setAddress("Hauptstrasse", 21, "45700", "Klein Bollersen", "Deutschland");
		aPerson.setDob(30, APR, 1980);
		print(aPerson);
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
		return 1;
	}

	return 0;
}

void print(Customer aPerson)
{
	//prints out all the person's details
	cout << aPerson;

}
