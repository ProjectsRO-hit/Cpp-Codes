#include <iostream>
#include <concepts>
using namespace std;

template <typename T>
    requires integral<T>
T add(T a, T b);
int main()
{
    int a{10};
    int b{20};

    cout << add(a, b);
    return 0;
}

template <typename T>
    requires integral<T>
T add(T a, T b)
{
    return a + b;
}