#ifndef CALCULATE_PRICE_H
#define CALCULATE_PRICE_H

#include "Movie.hpp"

/****** helpers ********/
const vector<unsigned int> m_seatPrice = {60, 90, 90, 130, 130, 90, 90, 60};

const map<HallE, float> c_HallPrice = { {HallE::HALL_1, 20},
                                        {HallE::HALL_2, 40},
                                        {HallE::HALL_3, 50}
                                      };

const map<DayE, float> c_DayPrice = { {DayE::THURSDAY, 70},
                                      {DayE::FRIDAY, 70},
                                      {DayE::SATURDAY, 64},
                                      {DayE::SUNDAY, 40},
                                      {DayE::MONDAY, 20},
                                      {DayE::TUESDAY, 15},
                                      {DayE::WEDNESDAY, 30}
                                    };

const map<TimeE, float> c_TimePrice = { {TimeE::NINE_AM, 5},
                                        {TimeE::TWELEVE_PM, 8},
                                        {TimeE::THREE_PM, 2},
                                        {TimeE::SIX_PM, 15},
                                        {TimeE::NINE_PM, 25},
                                        {TimeE::TWELEVE_AM, 30}
                                      };

class CalculatePrice
{
public:
    static int calculate( ShowTimeS _showTime, 
                          pair<int, int> _seatNumber,
                          HallE _hall
                        ) 
    {
        return c_DayPrice.at(_showTime.m_movieDay)  // Use 'at' for safety in case of invalid key access  
         + c_TimePrice.at(_showTime.m_time)  
         + c_HallPrice.at(_hall)   
         + m_seatPrice[_seatNumber.second]; 
        
        return 50;
    }
};

#endif