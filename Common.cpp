#include "Common.hpp"
#include <iostream>

// Function to convert DayE enum to string  
std::string hallToString(HallE hall) {  
    switch (hall) {  
        case HallE::HALL_1: return "HALL_1";  
        case HallE::HALL_2: return "HALL_2";  
        case HallE::HALL_3: return "HALL_3"; 
        default: return "UNKNOWN";  
    }
}
    
// Function to convert DayE enum to string  
std::string dayToString(DayE day) {  
    switch (day) {  
        case DayE::NONE: return "NONE";  
        case DayE::SATURDAY: return "SATURDAY";  
        case DayE::SUNDAY: return "SUNDAY";  
        case DayE::MONDAY: return "MONDAY";  
        case DayE::TUESDAY: return "TUESDAY";  
        case DayE::WEDNESDAY: return "WEDNESDAY";  
        case DayE::THURSDAY: return "THURSDAY";  
        case DayE::FRIDAY: return "FRIDAY";  
        default: return "UNKNOWN";  
    }  
}  

// Function to convert TimeE enum to string  
std::string timeToString(TimeE time) {  
    switch (time) {  
        case TimeE::NONE: return "NONE";  
        case TimeE::NINE_AM: return "9 AM";  
        case TimeE::TWELEVE_PM: return "12 PM";  
        case TimeE::THREE_PM: return "3 PM";  
        case TimeE::SIX_PM: return "6 PM";  
        case TimeE::NINE_PM: return "9 PM";  
        case TimeE::TWELEVE_AM: return "12 AM";  
        default: return "UNKNOWN";  
    }  
}  