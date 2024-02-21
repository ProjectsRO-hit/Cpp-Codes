#include <iostream>
#include<iomanip>

using namespace std;
int main()
{
    float x{7.343434554565};
    double y{9.43223233233232332323};

    cout << setprecision(20);
    cout << "float x = " << x << endl;
    cout << "double y = " << y << endl;
    return 0;
}