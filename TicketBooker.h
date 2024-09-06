#ifndef TICKET_BOOKER_H
#define TICKET_BOOKER_H

#include "Ticket.hpp"
#include "Cinema.hpp"
#include "MoviesSearcher.hpp"
#include "CalculatePrice.hpp"

class TicketBooker
{
public:
    static Ticket book( unique_ptr<CinemaC> cinema,
                        string _m_title, 
                        ShowTimeS _showTime, 
                        pair<int, int> _seatNumber,
                        HallE _hall
                      ) {
        bool _result;
        _result =  MoviesSearcher::searchMovies(std::move(cinema), _m_title, _showTime, _seatNumber);
       
        if(_result) {
            int _price = CalculatePrice::calculate(_showTime, _seatNumber, _hall);
            return Ticket(_m_title, _showTime, _price,_seatNumber);
        }
        else 
            return Ticket();
    }
};

#endif