#include "read.h"
#include <bitset>

void print_car_status(const uint16_t &info) {

    const decode *p = reinterpret_cast<const decode*> (&info);

    std::cout << "Front left door status: ";
    if(p->Door_fl){
        std::cout << " Closed" << std::endl;
    }
    else{
        std::cout << " Open" << std::endl;
    }
    std::cout << "Door status: ";
    std::cout << p->Door_fl << p->Door_fr << p->Door_rl << p->Door_rr << std::endl;

    std::cout << "Windows status: ";
    std::cout << p->Window_fl << p->Window_fr << p->Window_rl << p->Window_rr << std::endl;

    std::cout << "Seatbelt status: ";
    std::cout << p->Seatbelt_fl << p->Seatbelt_fr << p->Seatbelt_rl << p->Seatbelt_rr << std::endl;

    std::cout << "Light status: ";
    std::cout << p->Light_day << p->Light_high << p->Light_reverse << std::endl;



}

