#ifndef REGULAR_SEAT_H
#define REGULAR_SEAT_H

#include "Seat.h"

class RegularSeat :public Seat{
public:
    /***** constructor ****/
    RegularSeat(){ SetPrice(60);}
};

#endif