#ifndef _READ_H
#define _READ_H
#include <iostream>
#include <cmath>
#include <bitset>


struct decode{
    unsigned Speed:4;
    unsigned Front:3;
    unsigned Rear:3;
    unsigned Right:3;
    unsigned Left:3;
};

struct encode{    
    unsigned Left:3;
    unsigned Right:3;    
    unsigned Rear:3;
    unsigned Front:3;
    unsigned Speed:4;
};

uint16_t code_car_status(int &speed, int &front, int &rear, int &right, int &left);

void print_car_status(const uint16_t &info);

#endif