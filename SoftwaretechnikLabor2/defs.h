#pragma once
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
