#include <iostream>
 
int main(){
    
    const int age{33};
 
    const int& age_ref{age};
 
    std::cout << "--Before--" << std::endl;
    std::cout << "age_ref: " << age_ref << std::endl;
    std::cout << "&age_ref : " << &age_ref << std::endl;
 
    int age1 {44};
    age_ref = age1;
 
    std::cout << "--After--" << std::endl;
    std::cout << "age_ref: " << age_ref << std::endl;

    std::cout << "&age_ref : " << &age_ref << std::endl;
 
    return 0;
}