#include <iostream>
using namespace std;

int number;
int end_point;

struct node{
        int data;
        node *next;
};
node *start_point = nullptr;

void add_node_at_end(){
    node *temp, *temp2;
    temp = new node;

    do{
        std::cout << "Provide positive number: " << std::endl;
        std::cin >> number;

        if(number<=0){
            std::cout << "Your number is not positive, please try again" << std::endl;
        }

    }while(number<=0);

    temp->data = number;
    temp->next = nullptr;

    if(start_point == nullptr){
        start_point = temp;
    }
    else{
        temp2 = start_point;
        while (temp2->next != nullptr)
        temp2 = temp2->next;
        temp2->next=temp;
    }
}

void print_node(){
    node *temp;
    temp = start_point;
    std::cout << "Value: " << temp->data << std::endl;
    while(temp->next!=nullptr){
        temp=temp->next;
        std::cout << "Value: " << temp->data << std::endl;
    };
}

void remove_front_node(){
    node *temp;
    temp= start_point;
    start_point=start_point->next;
    delete temp;
}

void find_tale(){
    node *temp;
    temp = start_point;
    while(temp->next!=nullptr){
        temp=temp->next;
    };
    std::cout << "Tale: " << &(temp->next)   << std::endl;
}

void reverse_order(){
    node *rev_head, *rev_tail;

    node *temp;
    temp = start_point;

  /*  I assume that there are 5 elements It is late now

    while(temp->next!=nullptr){
        temp=temp->next;
    };

    rev_head->data = number;
    rev_head->next = nullptr; */

    for(int i; i<pos; i++){
        
    }



}

int main(){
    
    for(int i=0;i<5;i++){
        add_node_at_end();
    }

    std::cout << "Deleted first node"<< std::endl;
    remove_front_node();

    add_node_at_end();

    std::cout << "Printing all nodes: "<< std::endl;
    print_node();
    
    std::cout << "Pointer to the tail: "<< std::endl;
    find_tale();

    std::cout << "Reversing the order of the node: "<< std::endl;
    /*reverse_order();*/
}
