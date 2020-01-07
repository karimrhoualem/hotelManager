/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include <iostream>
#include "Date.h"
#include "Room.h"
#include "Guest.h"
#include "ReservationRequest.h"
#include "HotelManager.h"
using namespace std;

int main() {

	HotelManager hMan(100);

	Date guestBirthDateObj(9, 17, 1993);
	Date reservationDate(10, 7, 2019);
	Date checkInDate(10, 20, 2019);
	Date checkOutDate(10, 30, 2019);

	Guest* guestPtr = new Guest("Karim", guestBirthDateObj);

	ReservationRequest* reservationRequest = new ReservationRequest(guestPtr, reservationDate, checkInDate, checkOutDate, 1);

	hMan.processReservation(reservationRequest);
	hMan.reservationDetails(reservationRequest->getReservationRequestNum());
	hMan.numRoomsAvailable(resDate);
	hMan.cancelReservation(reservationRequest->getReservationRequestNum(), reservationDate);

	delete guestPtr;
	delete reservationRequest;
}