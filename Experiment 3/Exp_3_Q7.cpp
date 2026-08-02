// Code by Harsh Deshmukh SY CSE-B 15
// Write a c++ code to create a class which calculates area of a circle

#include <iostream>
using namespace std;

class Circle
{
private:
    float radius;

public:
    void getData()
    {
        cout << "Enter the radius: ";
        cin >> radius;
    }

    void calculateArea()
    {
        float area = 3.14159 * radius * radius;
        cout << "Area of Circle = " << area << endl;
    }
};

int main()
{
    Circle c;

    c.getData();
    c.calculateArea();

    return 0;
}
