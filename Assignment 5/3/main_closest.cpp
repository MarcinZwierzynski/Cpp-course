#include "closest.h"
#include <functional>


int main(){

    std::vector<int> container;
    container.resize(1024);

    for(int i=0;i<1024;i++){
       container[i] = (rand()%2000);
    }
    int given = (rand()%2000);
    bubble_sort(container);
    binary_search(container, given);

}