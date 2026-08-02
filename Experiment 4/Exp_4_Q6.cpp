// Code by Harsh Deshmukh SY CSE-B 15
// Write a program to calculate square of number in which define class and define member function inside the class as per requirement

#include <iostream>
using namespace std;

class Square
{
private:
    int num;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void calculateSquare()
    {
        cout << "Square = " << num * num << endl;
    }
};

int main()
{
    Square s;

    s.getData();
    s.calculateSquare();

    return 0;
}
