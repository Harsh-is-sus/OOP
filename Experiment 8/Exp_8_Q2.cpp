// Code by Harsh Deshmukh SY CSE-B 15
// WAP to create a class employee having data members as name, id and department. Accept and display data for 5 employees.

#include <iostream>
using namespace std;

class Employee {
    string name, department;
    int id;

public:
    void getData() {
        cin >> name >> id >> department;
    }

    void display() {
        cout << name << " " << id << " " << department << endl;
    }
};

int main() {
    Employee e[5];

    for (int i = 0; i < 5; i++)
        e[i].getData();

    for (int i = 0; i < 5; i++)
        e[i].display();

    return 0;
}
