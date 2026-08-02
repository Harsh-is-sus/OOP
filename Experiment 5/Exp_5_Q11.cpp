// Code by Harsh Deshmukh SY CSE-B 15
// Write an inline function to find the largest among three numbers

#include <iostream>
using namespace std;

inline int largest(int a, int b, int c)
{
    if(a >= b && a >= c)
        return a;
    else if(b >= a && b >= c)
        return b;
    else
        return c;
}

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    cout << "Largest = " << largest(a, b, c);

    return 0;
}
