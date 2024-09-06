#include <iostream>
#include <string>
#include <vector>

#include "Cinema.hpp"
#include "TicketBooker.h"
#include "VipUser.hpp"

using namespace std;

int main()
{
    unique_ptr<CinemaC>& cinema = CinemaC::GetCinemaInst();

    /*
    MovieC( const string& title,
            const vector<MovieGenreE>& genre,
            float rating,
            const vector<ShowTimeS>& showTime
        );
    */
    vector<MovieGenreE> genre = {MovieGenreE::ACTION, MovieGenreE::COMEDY};
    vector<ShowTimeS> showTime = {{DayE::SATURDAY, TimeE::NINE_AM}};

    MovieC movie1("elgzera1", genre, 3.7, showTime);
    MovieC movie2("elgzera2", genre, 3.4, showTime);

    cinema->AddMovie(movie1);
    cinema->AddMovie(movie2);

    VipUser customer1("email_1@siemens.com", 123);
    CustomerC customer2("email_2@siemens.com", 110);
    
    cinema->AddUser(customer1);
    cinema->AddUser(customer2);

    Ticket ticket = TicketBooker::book(std::move(cinema), "elgzera1", {DayE::SATURDAY, TimeE::NINE_AM}, {2,2}, HallE::HALL_1);
    
    ticket.display();



    return 0;
}