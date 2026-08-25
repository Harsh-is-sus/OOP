// Code by Harsh Deshmukh SY CSE-B 15
// Implement a friend function to display employee details.

#include <iostream>
using namespace std;

class Employee {
    string name;
    int id;
    float salary;

public:
    void getData() {
        cin >> name >> id >> salary;
    }

    friend void display(Employee e);
};

void display(Employee e) {
    cout << "Name: " << e.name << endl;
    cout << "ID: " << e.id << endl;
    cout << "Salary: " << e.salary;
}

int main() {
    Employee e;

    e.getData();
    display(e);

    return 0;
}
