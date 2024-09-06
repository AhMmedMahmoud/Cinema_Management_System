#include <iostream>
#include "Movie.hpp"

/***** constructor *****/
MovieC::MovieC( const string& title,
        const vector<MovieGenreE>& genre,
        float rating,
        const vector<ShowTimeS>& showTime
        ): m_title(title),
            m_genre(genre),
            m_rating(rating),
            m_showTimes(showTime)
{}

/****** fundemental functions *****/
void MovieC::AddGenre(MovieGenreE genre) { m_genre.emplace_back(genre); }
void MovieC::AddShowTime(const ShowTimeS& showTime) { m_showTimes.emplace_back(showTime) ; }

/****** setters *****/
void MovieC::SetTitle(const string& title)              { m_title = title; }
void MovieC::SetGenre(const vector<MovieGenreE>& genre) { m_genre = genre; }
void MovieC::SetRating(float rating)                    { m_rating = rating; }

/****** getters *****/
const string& MovieC::GetTitle() const { return m_title; }
const float& MovieC::GetRating() const { return m_rating; }
string MovieC::GetGenreStr() {
    string str = "";
    for(const auto& genre : m_genre) {
        str += (m_genreStr.at(genre) + ", ");
    }
    if(!(str.empty())) {
        str.pop_back();
        str.pop_back();
    }
    return str;
}
const vector<MovieGenreE>& MovieC::GetGenreVec() const { return m_genre; }
const vector<ShowTimeS>& MovieC::GetShowTime() const { return m_showTimes; }

/******* helper function *****/
void MovieC::display() {
    cout << "Title" << GetTitle() << "\n";
    cout << "Genre: " << GetGenreStr() << "\n";
    cout << "Rating: " << GetRating() << "\n";
}