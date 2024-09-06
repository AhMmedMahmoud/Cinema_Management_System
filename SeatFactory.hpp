#ifndef SEAT_FACTORY_H
#define SEAT_FACTORY_H

#include "PremiumSeat.h"
#include "GoldenSeat.h"
#include "RegularSeat.h"

class SeatFactory
{
public:
    static Seat* createSeat(pair<int, int> seatNumber) {
        char letter = __m_seatPrice[seatNumber.first][seatNumber.second];

        switch (letter)
        {
        case 'p': return new PremiumSeat();
        case 'g': return new GoldenSeat();
        case 'r': return new RegularSeat();
        default: return new Seat(); 
        }
    }
};

#endif