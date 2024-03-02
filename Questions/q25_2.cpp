//    - Implement a program with a raw string literal to print a multi-line message.
// #include<iostream>
// #include<string>

// using namespace std;
// int main(){
//     std::string inp;
//     cout << "Enter String Input!" << endl;
//     std::getline(cin, inp);
//     cout << inp << endl;
//     return 0;
// }

#include<iostream>
#include<string>

using namespace std;

int main() {
    // Using a raw string literal to print a multi-line message
    cout << R"(
    This is a multi-line
    message using a raw string literal.
    )" << endl;

    return 0;
}
