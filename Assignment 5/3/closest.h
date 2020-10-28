#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

void bubble_sort(std::vector<int> &sort_arr){
    for(int i=0;i<sort_arr.size();i++){
        for(int j=i+1;j<sort_arr.size();j++){
            if(sort_arr[j]<sort_arr[i]){
                std::swap(sort_arr[j],sort_arr[i]);
            }
        }
    }

}

void print_array(std::vector<int> &count_arr){
    std::cout << "Number of occurences in ascending order: " << std::endl;
    for(int i=0;i<count_arr.size();i++){
        std::cout << i+1 << "." << " " << count_arr[i] << std::endl;
    }

}

void binary_search(std::vector<int> &container, int given){
    int L = 0, H=container.size();
    while(L<=H){
        int middle = floor((L+H)/2);
        //std::cout << "Middle is " << middle << std::endl;
        if(container[middle]<given){
            L= middle+1;
        }
        else if(container[middle]>given){
            H= middle-1;
        }
    }
    std::cout << "The neighbouring values of " << given << " are " << container[L] << " and " << container[H] << std::endl;
}