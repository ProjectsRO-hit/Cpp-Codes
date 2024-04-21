#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){

    std::srand(std::time(0)); // Seed
    int random_num = std::rand() % 10 + 1 ; // [1~10]
    for(size_t i {0} ; i < 20 ; ++i){
        random_num = std::rand() % 10 + 1;
        std::cout << "random_num " << i << "  :   " <<  random_num << std::endl; // 0 ~ RAND_MAX       
    }

 
   
    return 0;
}