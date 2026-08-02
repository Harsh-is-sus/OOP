// Code by Harsh Deshmukh SY CSE-B 15
// Write an inline function to find the maximum of two numbers

#include <iostream>
using namespace std;

class Maximum
{
public:
    inline int max(int a, int b)
    {
        return (a > b) ? a : b;
    }
};

int main()
{
    Maximum m;
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Maximum = " << m.max(a, b);

    return 0;
}
