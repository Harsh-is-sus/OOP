// Code by Harsh Deshmukh SY CSE-B 15
// Write a program to calculate the average using a friend function.

#include <iostream>
using namespace std;

class Average {
    int a, b, c;

public:
    void getData() {
        cin >> a >> b >> c;
    }

    friend float average(Average x);
};

float average(Average x) {
    return (x.a + x.b + x.c) / 3.0;
}

int main() {
    Average x;

    x.getData();

    cout << "Average = " << average(x);

    return 0;
}
