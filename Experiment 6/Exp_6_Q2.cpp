// Code by Harsh Deshmukh SY CSE-B 15
// Write a program to add private members of two different classes.

#include <iostream>
using namespace std;

class B;

class A {
    int x;

public:
    void getData() {
        cin >> x;
    }

    friend int add(A, B);
};

class B {
    int y;

public:
    void getData() {
        cin >> y;
    }

    friend int add(A, B);
};

int add(A a, B b) {
    return a.x + b.y;
}

int main() {
    A a;
    B b;

    a.getData();
    b.getData();

    cout << "Sum = " << add(a, b);

    return 0;
}
