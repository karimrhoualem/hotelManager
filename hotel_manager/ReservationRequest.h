/*
Karim Rhoualem - Student #26603157
Dilara Omeroglu - Student #40030357
*/
#ifndef ReservationRequest_h
#define ReservationRequest_h
#include <iostream>
#include "Guest.h"
#include "Date.h"
using namespace std;

class ReservationRequest {

public:
	ReservationRequest(Guest* guest, Date reservationDate, Date checkInDate, Date checkOutDate, int requestedNumBeds);
	~ReservationRequest();

	void setReservationRequestNum();
	void setGuest(Guest* guest);

	int getReservationRequestNum() const;
	int getRequestedNumBeds() const;

	Date getReservationDate() const;
	Date getCheckInDate() const;
	Date getCheckOutDate() const;

	Guest* getGuest() const;
	
private:
	static int counter;

	int m_reservationRequestNum;
	int m_requestedNumBeds;

	Guest* m_guest;

	Date m_reservationDate;
	Date m_checkInDate;
	Date m_checkOutDate;
	
};

#endif

