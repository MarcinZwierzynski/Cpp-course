#include "write.h"
#include <functional>


int main(){

    uint16_t information =0;
    int speed =0;
    int front =0;
    int rear =0;
    int right =0;
    int left =0;

    decode car;

    /*Asking the user from input*/
/*
    do{
        std::cout << "Provide positive speed: " << std::endl;
        std::cin >> speed;

        if(speed<=0){
            std::cout << "Your speed is not positive, please try again" << std::endl;
        }
    }while(speed<=0);

    do{
        std::cout << "Provide positive front distance: " << std::endl;
        std::cin >> front;

        if(front<=0){
            std::cout << "Your front distance not positive, please try again" << std::endl;
        }
    }while(speed<=0);

    do{
        std::cout << "Provide positive rear distance: " << std::endl;
        std::cin >> rear;

        if(rear<=0){
            std::cout << "Your rear distance not positive, please try again" << std::endl;
        }
    }while(rear<=0);

    do{
        std::cout << "Provide positive left distance: " << std::endl;
        std::cin >> left;

        if(front<=0){
            std::cout << "Your left distanc not positive, please try again" << std::endl;
        }
    }while(left<=0);
*/

    speed=300;
    front=1050;
    rear=1050;
    right=1050;
    left=1050;

    information = code_car_status(speed, front, rear, right, left); 
   // std::cout << "Coded information is: ";
    std::bitset<16> bit_status(information);
   // std::cout << bit_status << std::endl;

    print_car_status(information);

}