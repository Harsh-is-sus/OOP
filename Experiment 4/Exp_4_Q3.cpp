// Code by Harsh Deshmukh SY CSE-B 15
// Write a program to calculate the volume of a box using functions defined outside the class

#include <iostream>
using namespace std;

class Box
{
private:
    float length, breadth, height;

public:
    void getData();      
    void calculateVolume();
};


void Box::getData()
{
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    cout << "Enter height: ";
    cin >> height;
}


void Box::calculateVolume()
{
    float volume = length * breadth * height;
    cout << "Volume of Box = " << volume << endl;
}

int main()
{
    Box b;

    b.getData();
    b.calculateVolume();

    return 0;
}
