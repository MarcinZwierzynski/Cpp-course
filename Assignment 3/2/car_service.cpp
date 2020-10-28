#include "car_service.h"

void service::print(){
std::cout << "Date: " << date.Day << "." << date.Month << "." << date.Year << "\n";
    std::cout << "Car name: " << Car_name << "\n";
    std::cout << "Services provided: " << Services << "\n";
    std::cout << "Services provided: " << Parts << "\n";
    std::cout << "Payment method: " << payment.Payment_method << "Paid amount: " << payment.Amount << "\n" << "\n";
}