// Code by Harsh Deshmukh SY CSE-B 15
// Write a program to convert float datatype number into integer and integer into float.

#include <iostream>
using namespace std;

int main()
{
    float f;
    int i;


    cout << "Enter a float number: ";
    cin >> f;

    cout << "Enter an integer: ";
    cin >> i;


    int intValue = (int)f;
    float floatValue = (float)i;


    cout << "\nAfter Conversion:\n";
    cout << "Float to Integer = " << intValue << endl;
    cout << "Integer to Float = " << floatValue << endl;

    return 0;
}
