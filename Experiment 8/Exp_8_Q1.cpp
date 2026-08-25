// Code by Harsh Deshmukh SY CSE-B 15
// Write a program to store details of five customers. Assume suitable data members.

#include <iostream>
using namespace std;

class Customer {
    int id;
    string name;
    float balance;

public:
    void getData() {
        cin >> id >> name >> balance;
    }

    void display() {
        cout << id << " " << name << " " << balance << endl;
    }
};

int main() {
    Customer c[5];

    for (int i = 0; i < 5; i++)
        c[i].getData();

    for (int i = 0; i < 5; i++)
        c[i].display();

    return 0;
}
