#include "write.h"
#include <bitset>

uint16_t code_car_status(int &speed, int &front, int &rear, int &right, int &left) {

    uint16_t car_status=0;
    std::bitset<16> car_stat(car_status);

    int speed_facor = 20;
    int distance_facor = 150;
    decode p;

    p.Speed = speed/speed_facor;
    p.Front = front/distance_facor;
    p.Rear = rear/distance_facor;
    p.Left = left/distance_facor;
    p.Right = right/distance_facor;

    std::bitset<16> spd(p.Speed);
    car_stat|=spd;
    car_stat<<=12;

    std::bitset<16> frnt(p.Front);
    frnt<<=9;
    car_stat|=frnt;

    std::bitset<16> rer(p.Rear);
    rer<<=6;
    car_stat|=rer;

    std::bitset<16> lft(p.Left);
    lft<<=3;
    car_stat|=lft;

    std::bitset<16> rght(p.Right);
    car_stat|=rght;
    
    /* Convert my binary message at int */
    car_status = (int)(car_stat.to_ulong());

    return car_status;
    
}


void print_car_status(const uint16_t &info) {
    int speed_facor = 20;
    int distance_facor = 150;

    const encode *p = reinterpret_cast<const encode*> (&info);

    if(((p->Speed)*speed_facor)>0){
        if(((p->Rear)<=0)||((p->Front)<=0)||((p->Left)<=0)||((p->Right)<=0))
            std::cout << "Oh NOOO!!! It's a CR..A.S...efe.f. ";
        else
        {
            std::cout << "All good, no crash detected" << std::endl;
        }   
    }
}
