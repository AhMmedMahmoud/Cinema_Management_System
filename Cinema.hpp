#ifndef CINEMA_HPP
#define CINEMA_HPP

#include <string>
#include <vector>
#include <memory>
#include <optional>

#include "Movie.hpp"
#include "User.hpp"
#include "Common.hpp"

class CinemaC {
    public:
        /****** static member function single ******/
        static unique_ptr<CinemaC>& GetCinemaInst();

    private:
        /*********** static data member ************/
        static unique_ptr<CinemaC> m_cinemaInst;

    private:
        /***** attributes ******/
        vector<MovieC> m_movies;
        vector<CustomerC> m_users;

    public:
        /******* fundemetal functions ********/
        void AddMovie(const MovieC& movie) { m_movies.emplace_back(movie); }
        void AddUser(const CustomerC& user) { m_users.emplace_back(user); }
        
        /******** getters ******/
        const vector<MovieC>& GetMovies() const { return m_movies; }
        const vector<CustomerC>& GetUsers() const { return m_users; }
};

#endif
