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