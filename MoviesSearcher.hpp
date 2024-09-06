#include "Cinema.hpp"

class MoviesSearcher
{
public:
    bool static searchMovies(unique_ptr<CinemaC> cinema, string title, ShowTimeS showTime, pair<int, int> _seatNumber) {
        auto movies = cinema->GetMovies();
        
        for(auto movie : movies) {
            if(movie.GetTitle() == title) {
                auto times = movie.GetShowTime();
                for(auto time : times) {
                    if(time == showTime) { 
                        
                        return true;
                    }
                }
                return false;
            }
        }

        return false;
    }
};