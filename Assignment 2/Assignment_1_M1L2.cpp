#include <iostream>

int number;
int x_dim,
    y_dim,
    z_dim;

int *arr_x;
int **arr_y;
int ***arr_z;


int main(){

    do{
        std::cout << "Provide positive number: " << std::endl;
        std::cin >> number;

        if(number<=0){
            std::cout << "Your number is not positive, please try again" << std::endl;
        }

    }while(number<=0);

    do{
        std::cout << "Provide positive X dimension: " << std::endl;
        std::cin >> x_dim;

        if(x_dim<=0){
            std::cout << "Your number of dimensions is not positive, please try again" << std::endl;
        }

    }while(x_dim<=0);
    
    do{
        std::cout << "Provide positive Y dimension: " << std::endl;
        std::cin >> y_dim;

        if(y_dim<=0){
            std::cout << "Your number of dimensions is not positive, please try again" << std::endl;
        }

    }while(y_dim<=0);
    
    do{
        std::cout << "Provide positive Z dimension: " << std::endl;
        std::cin >> z_dim;

        if(z_dim<=0){
            std::cout << "Your number of dimensions is not positive, please try again" << std::endl;
        }

    }while(z_dim<=0);


    arr_z = new int**[z_dim];

    for(int i=0; i<z_dim; i++){
        arr_z[i] = new int*[y_dim];

        for(int j=0; j<y_dim; j++){
            arr_z[i][j] = new int[x_dim];
            
            for(int k=0; k<x_dim; k++){
                arr_z [i][j][k] = std::rand() % number;
            };
        };
    };

    for(int i=0; i<z_dim; i++){
        for(int j=0; j<y_dim; j++){
            for(int k=0; k<x_dim; k++){
                std::cout << arr_z[i][j][k] << " " ;
            };
            std::cout << std::endl;
        };
        std::cout << std::endl;
    };

}
