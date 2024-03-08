#include <iostream>
using namespace std;

const int marker{10};   
const int pen{20};
const int eraser{30};
const int paintbrush{40};
const int highlighter{50};
const int paintbucket{60};

int main()
{

    int tool{marker};
    if (tool == marker)
    {
        cout << "Active Tool is Marker" << endl;
    }
    else if (tool == pen)
    {
        cout << "Active Tool is Pen" << endl;
    }
    else if (tool == eraser)
    {
        cout << "Active Tool is Eraser" << endl;
    }
    else if (tool == paintbrush)
    {
        cout << "Active Tool is Paint Brush" << endl;
    }
    else if (tool== highlighter)
    {
        cout << "Active Tool is Highlighter" << endl;
    }
    else if (tool == paintbucket)
    {
        cout << "Active Tool is Paint Bucket" << endl;
    }
    else if (tool == marker)
    {
        cout << "Active Tool is Marker2" << endl;
    }

    cout << "Moving on" << endl;

    return 0;
}