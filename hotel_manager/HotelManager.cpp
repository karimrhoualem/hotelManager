/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include "HotelManager.h"

HotelManager::HotelManager(int sizeOfHotel) {

	m_sizeOfHotel = sizeOfHotel;

	m_rooms = new Room*[sizeOfHotel];

	for (int i = 0; i < sizeOfHotel; ++i)
	{
		// Half of the hotel rooms will have one bed, and the other half will have two beds
		if (i < (sizeOfHotel / 2)) {
			m_rooms[i] = new Room(1, i + 1);
		}
		else {
			m_rooms[i] = new Room(2, i + 1);
		}
	}
}

HotelManager::~HotelManager() {

}

int HotelManager::processReservation(ReservationRequest* reservationRequest) {

}

void HotelManager::reservationDetails(int reservationRequestNum) {

}

void HotelManager::cancelReservation(int reservationRequestNum, Date currentDateObj) {
	
}

void HotelManager::numRoomsAvailable(Date dateObj) {

}