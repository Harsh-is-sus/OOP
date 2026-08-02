// Code by Harsh Deshmukh SY CSE-B 15
// Find the area of rectangle by casting double data into float and integer type

#include <iostream>
using namespace std;

int main()
{
    double length, breadth;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    
    float flength = (float)length;
    float fbreadth = (float)breadth;

    int ilength = (int)length;
    int ibreadth = (int)breadth;

    
    float floatArea = flength * fbreadth;
    int intArea = ilength * ibreadth;

    cout << "\nArea using float = " << floatArea << endl;
    cout << "Area using integer = " << intArea << endl;

    return 0;
}
