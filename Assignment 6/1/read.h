#ifndef _READ_H
#define _READ_H
#include <iostream>
#include <cmath>
#include <bitset>


const uint16_t information = 0b1011101001011011;

struct decode{
    unsigned Seatbelt_fl:1;
    unsigned Seatbelt_fr:1;
    unsigned Seatbelt_rl:1;
    unsigned Seatbelt_rr:1;
    unsigned Seatbelt_rmid:1;
    unsigned Window_fl:1;
    unsigned Window_fr:1;
    unsigned Window_rl:1;
    unsigned Window_rr:1;
    unsigned Door_fl:1;
    unsigned Door_fr:1;
    unsigned Door_rl:1;
    unsigned Door_rr:1;
    unsigned Light_day:1;
    unsigned Light_high:1;
    unsigned Light_reverse:1;
};

void print_car_status(const uint16_t &info);
#endif