/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#include "ReservationRequest.h"

int ReservationRequest::counter = 0;

ReservationRequest::ReservationRequest(Guest* guest, Date reservationDate, Date checkInDate, Date checkOutDate, int requestedNumBeds) {

	m_guest = guest;
	m_reservationDate = reservationDate;
	m_checkInDate = checkInDate;
	m_checkOutDate = checkOutDate;
	m_requestedNumBeds = requestedNumBeds;
}

ReservationRequest::~ReservationRequest() {

	cout << "Destructor has been called. ReservationRequest object has been deleted." << endl;
}

void ReservationRequest::setReservationRequestNum() {

	int count = counter++;
	m_reservationRequestNum = count;
}

void ReservationRequest::setGuest(Guest* guest) {

	this->m_guest = guest;
}

int ReservationRequest::getReservationRequestNum() const {

	return m_reservationRequestNum;
}

int ReservationRequest::getRequestedNumBeds() const {

	return m_requestedNumBeds;
}

Date ReservationRequest::getReservationDate() const {

	return m_reservationDate;
}

Date ReservationRequest::getCheckInDate() const {

	return m_checkInDate;
}

Date ReservationRequest::getCheckOutDate() const {

	return m_checkInDate;
}

Guest* ReservationRequest::getGuest() const {

	return m_guest;
}
