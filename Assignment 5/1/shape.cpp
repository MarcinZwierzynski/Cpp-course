#include "shape.h"


bool Shape::operator<(Shape &other) {
    if (this->area() < other.area()){
        if(this->perimeter() < other.perimeter()){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
}
bool Shape::operator>(Shape &other) {
    if (this->area() > other.area()){
        if(this->perimeter() > other.perimeter()){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
}
bool Shape::operator==(Shape &other) {
    if (this->area() == other.area()){
        if(this->perimeter() == other.perimeter()){
            return 1;
        }
        else{
            return 0;
        }
    }
    else{
        return 0;
    }
}            