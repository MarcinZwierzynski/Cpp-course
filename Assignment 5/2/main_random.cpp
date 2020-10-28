#include "random.h"
#include <functional>


int main(){

    std::vector<int> container;
    container.resize(33);


    for(int i=0;i<10000;i++){
       unsigned int a = (rand()%33);
       container[a] ++;
    }
    bubble_sort(container);
    print_array(container);

}