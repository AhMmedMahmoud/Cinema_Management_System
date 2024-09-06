#ifndef MOVIE_HPP
#define MOVIE_HPP

#include <string>
#include <vector>
#include <unordered_map>
#include "Common.hpp"

using namespace std;

enum class MovieGenreE {
    ACTION,
    COMEDY,
    DRAMA,
    THRILLER,
    HORROR,
    SCIENCE_FICTION,
    ROMANCE
};

struct ShowTimeS {
    DayE m_movieDay;
    TimeE m_time;

    bool operator==(const ShowTimeS& obj) {
        return (m_movieDay == obj.m_movieDay && m_time == obj.m_time);
    }
};

class MovieC {
private:
    /**** attributes *****/
    string m_title;                 // title of movie
    float m_rating;                 // rate of movie
    vector<MovieGenreE> m_genre;    // kinds of movie 
    vector<ShowTimeS> m_showTimes;  // times of movie

    /***** helper that is used to map enum to string *****/
    const unordered_map<MovieGenreE, string> m_genreStr = {
        { MovieGenreE::ACTION,              "Action"           },
        { MovieGenreE::COMEDY,              "Comedy"           },
        { MovieGenreE::DRAMA,               "Drama"            },
        { MovieGenreE::THRILLER,            "Thriller"         },
        { MovieGenreE::HORROR,              "Horror"           },
        { MovieGenreE::SCIENCE_FICTION,     "Science fiction"  },
        { MovieGenreE::ROMANCE,             "Romance"          }
    };

public:
    /***** constructor *****/
    MovieC( const string& title,
            const vector<MovieGenreE>& genre,
            float rating,
            const vector<ShowTimeS>& showTime
          );

    /****** fundemental functions *****/
    void AddGenre(MovieGenreE genre);
    void AddShowTime(const ShowTimeS& showTime);

    /****** setters *****/
    void SetTitle(const string& title);
    void SetGenre(const vector<MovieGenreE>& genre);
    void SetRating(float rating);
    
    /****** getters *****/
    const string& GetTitle() const;
    const float& GetRating() const;
    string GetGenreStr();
    const vector<MovieGenreE>& GetGenreVec() const;
    const vector<ShowTimeS>& GetShowTime() const;

    /******* helper function *****/
    void display();
};

#endif