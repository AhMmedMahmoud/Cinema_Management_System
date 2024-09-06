#include "Ticket.hpp"

int Ticket::noOfTickets = 1;

/******* constructor *******/
Ticket::Ticket() : id(0),
                   m_title(""),
                   showTime({DayE::NONE,TimeE::NONE}),
                   price(0),
                   seatNumber({-1,-1})
{}

Ticket::Ticket( string _m_title,
                ShowTimeS _showTime, 
                int _price,
                pair<int, int> _seatNumber
              ) : id(noOfTickets),
                  m_title(_m_title),
                  showTime(_showTime),
                  price(_price),
                  seatNumber(_seatNumber)
{
    noOfTickets++;
}

void Ticket::display() {
    cout << "Ticket ID: " << id << "\n";
    cout << "Movie Name: " << m_title << "\n";
    cout << "Time: " << dayToString(showTime.m_movieDay) << ", " << timeToString(showTime.m_time) << "\n"; 
    cout << "Price: " << price << "\n";
    cout << "SeatNumber: " << seatNumber.first << ", " << seatNumber.second << "\n";
}