/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#ifndef HotelManager_h
#define HotelManager_h
#include "Room.h"
#include "ReservationRequest.h"
#include "Guest.h"
#include <iostream>
using namespace std;

class HotelManager {

public:
	HotelManager(int sizeOfHotel);
	~HotelManager();

	void reservationDetails(int reservationRequestNum);
	void cancelReservation(int reservationRequestNum, Date currentDateObj);
	void numRoomsAvailable(Date dateObj);

	int processReservation(ReservationRequest* reservationRequest);

private:
	int m_sizeOfHotel;

	Room** m_rooms;

	Guest* m_guests;

	ReservationRequest* m_reservations;
};

#endif