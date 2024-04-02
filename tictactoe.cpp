#include<iostream>
#include<iomanip>

using namespace std;
int main(){
    std::cout << "Daniel" << " " << "Grey" << " 25" << std::endl;
    std::cout << "Ram" << " " << "Singh" << " 56" << std::endl;
    std::cout << "Pappu" << " " << "Pandey" << " 25" << std::endl;
    std::cout << "Babu" << " " << "Chapri" << " 25" << std::endl;
    std::cout << "Shakti" << " " << "Dada" << " 25" << std::endl;
    std::cout << "Rimjhim" << " " << "Pandey" << " 25" << std::endl;
    std::cout << "Divyam" << " " << "Sharma" << " 25" << std::endl;


    std::cout << std::left;
    std::cout << std::setw(10)<<"Daniel" << std::setw(10)<< "Grey" << std::setw(10)<< " 25" << std::endl;
    std::cout << std::setw(10)<<"Ram" << std::setw(10)<< "Singh" << std::setw(10)<< " 56" << std::endl;
    std::cout << std::setw(10)<<"Pappu" << std::setw(10)<< "Pandey" << std::setw(10)<< " 25" << std::endl;
    std::cout << std::setw(10)<<"Babu" << std::setw(10)<< "Chapri" << std::setw(10)<< " 25" << std::endl;
    std::cout << std::setw(10)<<"Shakti" << std::setw(10)<< "Dada" << std::setw(10)<< " 25" << std::endl;
    std::cout << std::setw(10)<<"Rimjhim" << std::setw(10)<< "Pandey" << std::setw(10)<< " 25" << std::endl;
    std::cout << std::setw(10)<<"Divyam" << std::setw(10)<< "Sharma" << std::setw(10)<< " 25" << std::endl;
    return 0;
}