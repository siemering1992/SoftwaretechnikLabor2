#pragma once
#include <map>
#include <string>
using namespace std;
#define OK 0
#define ERROR 1
#define MINYEAR 1800
#define MAXYEAR 2021

enum MONTH {
	JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV,
	DEC
};
struct Date
{
	unsigned int day;
	MONTH month;
	int year;
};
struct Address
{
	string street;
	unsigned int number;
	string postcode;
	string city;
	string country;
};


const map<string, int> Map1 {
	{ "Deutschland", 5},
	{"China", 6}
	/*{4, "Dänemarkt"},
	{4, "Belgien"},
	{10, "Amerika"},
	{8, "Niederlande"}*/
};




