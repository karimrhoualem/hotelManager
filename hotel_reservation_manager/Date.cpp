/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include "Date.h"

Date::Date(int m, int d, int y) {

	m_month = m;
	m_day = d;
	m_year = y;
}

Date::~Date() {
}

int Date::getMonth() {
	
	return m_month;
}

int Date::getDay() {

	return m_day;
}

int Date::getYear() {
	
	return m_year;
}