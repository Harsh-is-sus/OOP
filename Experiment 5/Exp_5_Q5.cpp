// Code by Harsh Deshmukh SY CSE-B 15
// Write an inline function to swap two numbers

#include <iostream>
using namespace std;

class Swap
{
private:
    int a, b;

public:
    void getData();
    inline void swapNum();
    void display();
};

void Swap::getData()
{
    cout << "Enter two numbers: ";
    cin >> a >> b;
}

inline void Swap::swapNum()
{
    int temp = a;
    a = b;
    b = temp;
}

void Swap::display()
{
    cout << "After Swapping:" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    Swap obj;

    obj.getData();
    obj.swapNum();
    obj.display();

    return 0;
}
