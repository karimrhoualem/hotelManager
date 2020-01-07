/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#ifndef Date_h
#define Date_h
#include <iostream>
using namespace std;

class Date {

public:
	Date(int m, int d, int y);
	~Date();

	int getMonth();
	int getDay();
	int getYear();

private:
	int m_month;
	int m_day;
	int m_year;
};

#endif