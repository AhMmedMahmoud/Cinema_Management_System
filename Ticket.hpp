#ifndef TICKET_H
#define TICKET_H

#include <iostream>
#include "Movie.hpp"

using namespace std;

class Ticket
{
    static int noOfTickets;
private:
    /****** attributs *******/
    int id;
    string m_title;                 // title of movie
    ShowTimeS showTime;             // time of movie
    int price;                      // price of movie
    pair<int, int> seatNumber;      // number of seat

public:
    /******* constructor *******/
    Ticket();
    Ticket(string _m_title, ShowTimeS _showTime, int price,pair<int, int> _seatNumber);

    /******** helper  **********/
    void display();
};

#endif