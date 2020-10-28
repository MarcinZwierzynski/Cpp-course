#include "shape.h"
#include <functional>
// bool operator== ( Shape& lhs,  Shape& rhs){
//     return lhs.area() == rhs.area();
// }


int main(){

    Shape *figure[4];
    figure[0] = new Circle(1);
    figure[1] = new Triangle(10);
    figure[2] = new Rectangle(4,3);
    figure[3] = new Square(70);

    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            compare<Shape&>(*figure[i], *figure[j]);
        }
    }
    return 0;
 
    for(int i=0;i<4;i++){
        for(int j=i+1;j<4;j++){
            if ( *figure[i] == *figure[j]){
                std::string str_left (typeid(*figure[i]).name());
                str_left.erase (str_left.begin());
                std::string str_right (typeid(*figure[j]).name());
                str_right.erase (str_right.begin());
                std::cout << str_left << " and " << str_right << " are equal" << std::endl;
            }
            else if ( *figure[i]  < *figure[j] ){
                std::string str_left (typeid(*figure[i]).name());
                str_left.erase (str_left.begin());
                std::string str_right (typeid(*figure[j]).name());
                str_right.erase (str_right.begin());
                std::cout << str_left << " is greater than " << str_right << std::endl;
            }
            else if ( *figure[i]  > *figure[j] ){
                std::string str_left (typeid(*figure[i]).name());
                str_left.erase (str_left.begin());
                std::string str_right (typeid(*figure[j]).name());
                str_right.erase (str_right.begin());
                std::cout << str_left << " is smaller than " << str_right << std::endl;
            }





        }
    }
}