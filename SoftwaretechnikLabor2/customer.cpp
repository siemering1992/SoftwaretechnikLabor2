#include "customer.h"
#include "defs.h"
#include <iostream>
#include <map>
using namespace std;



void Customer::setAddress(string street, unsigned int number, string postcode, string city, string country)
{
    _address.street = street;
    _address.number = number;

    for (it = first.begin(); it != first.end(); ++it) {
        cout << it->first << " => " << it->second << '\n';
    }
    if (country == Map1 && str.length(postcode) == Map1)
    {
        _address.postcode = postcode;
        _address.country = country;
    }
    catch (const std::exception&)
    {

    }
    
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