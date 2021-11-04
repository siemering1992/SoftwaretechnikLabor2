#include "customer.h"
#include "defs.h"
#include <iostream>
using namespace std;



void Customer::setAddress(string street, unsigned int number, string postcode, string city, string country)
{
    

    if (postcode.length() != Map1.at(country)) {
        throw exception("Invalid length of postal code for given country!");
    };

    _address.street = street;
    _address.number = number;
    _address.postcode = postcode;
    _address.country = country;
    _address.city = city;
    

}

Address Customer::address()
{
    return _address;
}

void Customer::setId(unsigned int id)
{
    _id = id;
}

unsigned int Customer::id()
{
    return _id;
}