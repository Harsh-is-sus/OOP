// Code by Harsh Deshmukh SY CSE-B 15
// Write a program to calculate the cube of a number using an inline function

#include <iostream>
using namespace std;

class Cube
{
public:
    inline int cube(int n)
    {
        return n * n * n;
    }
};

int main()
{
    Cube c;
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Cube = " << c.cube(num);

    return 0;
}
