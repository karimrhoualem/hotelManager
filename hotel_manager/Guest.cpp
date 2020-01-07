/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include "Guest.h"

Guest::Guest(string name, Date birthDateObj) {

	m_name = name;
	m_birthDateObj = birthDateObj;
}

Guest::~Guest() {

	cout << "Destructor has been called. Guest object has been deleted." << endl;
}

void Guest::setRoomNum(int roomNum) {

	this->m_roomNum = roomNum;
}

string Guest::getName() {

	return m_name;
}

int Guest::getReservedRoom() {

	return m_roomNum;
}

Date Guest::getBirthDate() {

	return m_birthDateObj;
}




