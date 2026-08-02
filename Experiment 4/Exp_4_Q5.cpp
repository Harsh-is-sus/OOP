// Code by Harsh Deshmukh SY CSE-B 15
// Write a program to calculate the area of a rectangle using functions defined outside the class

#include <iostream>
using namespace std;

class Rectangle
{
private:
    float length, breadth;

public:
    void getData();        
    void calculateArea();  
};


void Rectangle::getData()
{
    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;
}


void Rectangle::calculateArea()
{
    float area = length * breadth;
    cout << "Area of Rectangle = " << area << endl;
}

int main()
{
    Rectangle r;

    r.getData();
    r.calculateArea();

    return 0;
}
