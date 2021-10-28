#include "person.h"
#include "defs.h"
#include <sstream>
#include <iostream>
using namespace std;

// Default Konstruktor Person
Person::Person()
{
    setName("Max");
    setSurname("Mustermann");
    setDob(01, JAN, 1000);
};
// Konstruktor Person
Person::Person(string name, string surname, Date date)
{
    setName(name);
    setSurname(surname);
    setDob(date.day, date.month, date.year);
}

void Person::setName(string name)
{
    _name = name;
}

string Person::name()
{
    return _name;
}

void Person::setSurname(string surname)
{
    _surname = surname;
}

string Person::surname()
{
    return _surname;
}


int Person::setDob(unsigned int day, MONTH month, int year)
{
    //Check if Date is valid
    //Day range 1-31
    if (day < 1 || day > 31) {
        return 1;
    }
    // Month range 1-12
    else if (month < 1 || month > 12) {
        return 1;
    }
    // Period of time Min-Max
    else if (year < MINYEAR || year > MAXYEAR) {
        return 1;
    }
    // If month 4,6,9,11 have valid days
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31) {
        return 1;
    }
    // If month 2 and month divide 4 (leap year) have valid days
    else if ((month == 2) && (year % 4 == 0) && day > 29) {
        return 1;

    }
    // If month 2 and month not divide 4 (leap year) have valid days
    else if ((month == 2) && (year % 4 != 0) && day > 28) {
        return 1;
    }

    _dob.day = day;
    _dob.month = month;
    _dob.year = year;

    return 0;
}

Date Person::dob()
{
    return _dob;
}