#ifndef PREMIUM_SEAT_H
#define PREMIUM_SEAT_H

#include "Seat.h"

class PremiumSeat :public Seat{
public:
    /***** constructor ****/
    PremiumSeat(){ SetPrice(90);}
};

#endif