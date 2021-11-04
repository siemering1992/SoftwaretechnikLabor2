#include "person.h"
#include "defs.h"
#include <iostream>
#include <cctype>
using namespace std;


// Konstruktor Person
Person::Person() {};
Person::Person(string name, string surname, Date date)
{
    setName(name);
    setSurname(surname);
    setDob(date.day, date.month, date.year);
}

void Person::setName(string name)
{

    for (unsigned int i = 0; i < name.size(); ++i)
    {
        if (!isalpha(name[i]))
        {
            throw exception("A Persons name has to be only alpha chars.");
        }
    }
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




void Person::setDob(unsigned int day, MONTH month, int year)
{
    //Check if Date is valid
    //Day range 1-31
    if (day < 1 || day > 31) 
    {
        throw exception("Wrong Day");
    }
    // Month range 1-12
    else if (month < 1 || month > 12) 
    {
        throw exception("Wrong Month");
    }
    // Period of time Min-Max
    else if (year < MINYEAR || year > MAXYEAR) 
    {
        throw exception("Wrong Year");
    };
    // If month 4,6,9,11 have valid days
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 31) 
    {
        throw exception("Wrong Date! The month entered does not have 31 days!");
    }
    // If month 2 and month divide 4 (leap year) have valid days
    else if ((month == 2) && (year % 4 == 0) && day > 29) 
    {
        throw exception("Wrong Date ! Attention leap year ");
    }
    // If month 2 and month not divide 4 (leap year) have valid days
    else if ((month == 2) && (year % 4 != 0) && day > 28) 
    {
        throw exception("Wrong Date ! Attention leap year");
    }

    _dob.day = day;
    _dob.month = month;
    _dob.year = year;

}

Date Person::dob()
{
    return _dob;
}