#include "customer.h"
#include "defs.h"
#include <iostream>
using namespace std;



void Customer::setAddress(string street, unsigned int number, string postcode, string city, string country)
{
    

    if (postcode.length() != Map1.at(country)) 
    {
          throw exception("Invalid length of postal code for given country!");   
    };

    for (unsigned int i = 0; i < postcode.size(); ++i)
        if ( country == "Deutschland" && isalpha(postcode[i]))
        {
            throw exception("A postal code in Germany are only chars possible!");
        }

    for (unsigned int i = 0; i < city.size(); ++i)
    {
        if (!isalpha(city[i]) && !isspace(city[i]))
        {
         
            throw exception("A city have to be only alpha chars.");  
        }
    }

    for (unsigned int i = 0; i < country.size(); ++i)
    {
        if (!isalpha(country[i]))
        {
            throw exception("A country have to be only alpha chars.");
        }
    }

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