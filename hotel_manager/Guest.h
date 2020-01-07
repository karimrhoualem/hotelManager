/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#ifndef Guest_h
#define Guest_h
#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Guest {

public:
	Guest(string name, Date birthDateObj);
	~Guest();

	void setRoomNum(int roomNum);

	int getReservedRoom();

	string getName();

	Date getBirthDate();

private:
	int m_roomNum;

	string m_name;

	Date m_birthDateObj;
	
};

#endif
