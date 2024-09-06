#ifndef MOVIES_VIEWER_H
#define MOVIES_VIEWER_H

#include "Cinema.hpp"

class MoviesViewer
{
public:
    void static viewMovies(unique_ptr<CinemaC> cinema) {
        auto movies = cinema->GetMovies();
        for(auto movie : movies) {
            movie.display();
        }
    }
};

#endif