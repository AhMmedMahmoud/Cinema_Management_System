#ifndef COMMON_HPP
#define COMMON_HPP

#include <array>
#include <map>
#include <string>

using namespace std;

const unsigned int c_NumRows = 4;
const unsigned int c_NumCols = 8;

enum class DayE {
    NONE,
    SATURDAY,
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
};

enum class TimeE {
    NONE,
    NINE_AM,
    TWELEVE_PM,
    THREE_PM,
    SIX_PM,
    NINE_PM,
    TWELEVE_AM
};

enum class HallE {
    HALL_1,
    HALL_2,
    HALL_3
};

// Function to convert DayE enum to string  
std::string hallToString(HallE hall);
    
// Function to convert DayE enum to string  
std::string dayToString(DayE day);

// Function to convert TimeE enum to string  
std::string timeToString(TimeE time);

// Aliases
using seatsArr = array<array<bool, c_NumCols>, c_NumRows>;

/*
    0,0   0,1   0,2   0,3   0,4   0,5   0,6   0,7
    1,0   1,1   1,2   1,3   1,4   1,5   1,6   1,7
    2,0   2,1   2,2   2,3   2,4   2,5   2,6   2,7
    3,0   3,1   3,2   3,3   3,4   3,5   3,6   3,7
*/






#endif