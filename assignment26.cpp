/* Your job is to declare your own reference variable,
 referencing the variable value1 which will be pre-declared and initialized for you. 
 Your reference variable will be called ref_value1 . */

 #include<iostream>
 
 using namespace std;
 int main(){
    int num1 {45};

    int& ref_num1 {num1};

    std::cout << num1 << " " << ref_num1;
    return 0;
 }