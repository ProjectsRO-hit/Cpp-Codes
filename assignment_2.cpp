/*Declare and initialize variables

Your task is to declare three double variables to model the dimensions of a box.
You'll have a variable named width of type double and it'll be initialized with a value of 10.0 ,
a length variable of type double initialized with a value of 20.1 and a height variable of type double initialized with a value of 4.5.
You will type your code in the exercise.h file within the two comments

        //Your code will go below this line
          ...
        //Your code will go above this line

Once you have the variables declared and initialized, you can hit the check solution button to see if you got this right.
 Our testing code will automatically check your code.
 If you can't get this right, you can check our solution file, but only if you have really tried your best.*/

#include <iostream>
#include "assignment_2.h"

using namespace std;
int main()
{

    double width{10.0};
    double length{20.1};
    double height{4.5};

    double area = summ(width, length, height);
    cout << area << endl;
    return 0;
}