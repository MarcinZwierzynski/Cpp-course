#include "../lib/shape.h"

int main(){

    Shape *figure;
    figure= new Circle(1);

    std::cout << figure << std::endl;
    std::cout << "I have created a new Circle object" << std::endl;
}