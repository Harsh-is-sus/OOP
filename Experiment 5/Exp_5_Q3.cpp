// Code by Harsh Deshmukh SY CSE-B 15
// Write an inline function to calculate the area of a circle

#include <iostream>
using namespace std;

class Circle
{
public:
    inline float area(float r)
    {
        return 3.14 * r * r;
    }
};

int main()
{
    Circle c;
    float radius;

    cout << "Enter radius: ";
    cin >> radius;

    cout << "Area = " << c.area(radius);

    return 0;
}
