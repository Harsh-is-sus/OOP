// Code by Harsh Deshmukh SY CSE-B 15
// Write a program to find the maximum of two numbers using a friend function.

#include <iostream>
using namespace std;

class Number {
    int a, b;

public:
    void getData() {
        cin >> a >> b;
    }

    friend void maximum(Number n);
};

void maximum(Number n) {
    if (n.a > n.b)
        cout << "Maximum = " << n.a;
    else
        cout << "Maximum = " << n.b;
}

int main() {
    Number n;
    n.getData();
    maximum(n);

    return 0;
}
