/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#ifndef Room_h
#define Room_h
#include <iostream>
#include "Date.h"
using namespace std;

class Room {

public:
	Room(int numBeds, int roomNum);
	~Room();

	void bookRoom(Date dateObj, int reservationRequestNum);
	void cancelRoom(Date dateObj);

	int getNumBeds();
	int getRoomNum();
	int getRoomAvailability(Date dateObj);

private:
	int m_numBeds;
	int m_roomNum;
	int m_roomAvailability[12][30] = { 0 };
};

#endif
