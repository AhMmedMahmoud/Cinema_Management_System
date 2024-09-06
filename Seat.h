#ifndef SEAT_H
#define SEAT_H

#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;

const vector<vector<char>> __m_seatPrice = { {'r', 'p', 'p', 'g', 'g', 'p', 'p', 'r'},
                                             {'r', 'p', 'p', 'g', 'g', 'p', 'p', 'r'},
                                             {'r', 'p', 'p', 'g', 'g', 'p', 'p', 'r'},
                                             {'g', 'g', 'g', 'g', 'g', 'g', 'g', 'g'},
                                           };

class Seat {
private:
    /****** attributes ******/
    int price;

protected:
    /********* setter *******/
    void SetPrice(int p) {price=p;}

public:
    /***** constructor ****/
    Seat(): price(0)
    {}
    
    /******** getter *******/
    int GetPrice(){return price;}
};

#endif