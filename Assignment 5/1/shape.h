#include <iostream>
#include <cmath>

class Shape {
    protected:
        int width, heighth;
    public:
        virtual int area() = 0;
        virtual int perimeter() = 0;
        bool operator<(Shape &other);
        bool operator>(Shape &other);
        bool operator==(Shape &other);
};

class Circle: public Shape {
    public:
        int area(){
            return (3 * std::pow(width,2));
        }
        int perimeter(){
            return (2*3*width);
        }
        Circle(int a){
            width = a;
        };
};

class Triangle: public Shape {
    public:
        int area(){
            return (width*heighth)/2;
        }
        int perimeter(){
            return (3*width);
        }
        Triangle(int a){
            width = a;
            heighth = a;
        };
};

class Rectangle: public Shape {
    public:
        int area(){
            return (width*heighth);
        }
        int perimeter(){
            return 2*(width*heighth);
        }
        Rectangle(int a, int b){
            width = a;
            heighth = b;
        };
};

class Square: public Shape {
    public:
        int area(){
            return (width*heighth);
        }
        int perimeter(){
            return 2*(width*heighth);
        }
        Square(int a){
            width = a;
            heighth = a;
        };
};

template <typename T>
bool compare( T &a,  T &b){
    bool answer;
    if (a<b){
        std::string str_left (typeid(a).name());
        str_left.erase (str_left.begin());
        std::string str_right (typeid(b).name());
        str_right.erase (str_right.begin());
        std::cout << str_left << " is smaller than " << str_right << std::endl;
    }
    else if(a>b){
        std::string str_left (typeid(a).name());
        str_left.erase (str_left.begin());
        std::string str_right (typeid(b).name());
        str_right.erase (str_right.begin());
        std::cout << str_left << " is greater than " << str_right << std::endl;
    }
    else if(a==b){
        std::string str_left (typeid(a).name());
        str_left.erase (str_left.begin());
        std::string str_right (typeid(b).name());
        str_right.erase (str_right.begin());
        std::cout << str_left << " and " << str_right << " are equal" << std::endl;
    }
    return answer;
}