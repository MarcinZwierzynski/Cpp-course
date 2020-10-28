#include <iostream>

struct Date{
    int Day;
    int Month;
    int Year;
};

struct Payment{
    int Amount;
    std::string Payment_method;
};

class service{
    public:
        std::string Car_name;
        Date date;
        std::string Services;
        std::string Parts;
        Payment payment;
        void print();
};