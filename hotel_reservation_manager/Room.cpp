/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include "Room.h"

Room::Room(int numBeds, int roomNum) {

	m_numBeds = numbeds;
	m_roomNum = roomNum;
}

Room::~Room() {
	
}

void Room::bookRoom(Date dateObj, int reservationRequestNum) {

	m_roomAvailability[dateObj.getMonth()][dateObj.getDay()] = reservationRequestNum;
}

void Room::cancelRoom(Date dateObj) {

	m_roomAvailability[dateObj.getMonth()][dateObj.getDay()] = 0;
}

int Room::getNumBeds() {

	return m_numBeds;
}

int Room::getRoomNum() {

	return m_roomNum;
}

int Room::getRoomAvailability(Date dateObj) {

	return m_roomAvailability[dateObj.getMonth()][dateObj.getDay()];
}
