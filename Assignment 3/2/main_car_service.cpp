#include "car_service.h"


int main(){

    service X1, X2;

    X1.Car_name = "Ferrari";
    X1.date.Day = 1;
    X1.date.Month = 12;
    X1.date.Year = 1999;
    X1.Parts = "Engine";
    X1.payment.Payment_method = "Quick";
    X1.payment.Amount = 123;

    X2.Car_name = "Opel";
    X2.date.Day = 2;
    X2.date.Month = 10;
    X2.date.Year = 1998;
    X2.Parts = "Oil";
    X2.payment.Payment_method = "Quick";
    X2.payment.Amount = 123;

    X1.print();
    X2.print();

}