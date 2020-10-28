#include "shape.h"
bool operator== ( Shape& lhs,  Shape& rhs){
    return lhs.area() == rhs.area();
}


int main(){

    // Circle X1(2);
    // Triangle X2(5);
    // Rectangle X3(4,5);
    // Triangle X4(4);
    Shape *a =  new Circle(2),*b =  new Triangle(1), *c = new Rectangle(8,3), *d = new Triangle(7);


  /*  std::cout << a->area() << std::endl;
    std::cout << b->area() << std::endl;
    std::cout << a->perimeter() << std::endl;
    std::cout << b->perimeter() << std::endl;*/

     if ( *a == *b){
        std::string str_left (typeid(*a).name());
        str_left.erase (str_left.begin());
        std::string str_right (typeid(*b).name());
        str_right.erase (str_right.begin());
        std::cout << str_left << " and " << str_right << " are equal" << std::endl;
     }
    else if ( *a < *b){

        std::string str_left (typeid(*a).name());
        str_left.erase (str_left.begin());
        std::string str_right (typeid(*b).name());
        str_right.erase (str_right.begin());
        std::cout << str_left << " is greater than " << str_right << std::endl;

    }
    else if ( *a > *b){

        std::string str_left (typeid(*a).name());
        str_left.erase (str_left.begin());
        std::string str_right (typeid(*b).name());
        str_right.erase (str_right.begin());
        std::cout << str_left << " is smaller than " << str_right << std::endl;
    }

}