// Code by Harsh Deshmukh SY CSE-B 15
// WAP to create a class student having data members as roll-no, name and percentage. Accept data for 10 students and display names of students having percentage greater than 75.

#include <iostream>
using namespace std;

class Student {
    int rollno;
    string name;
    float percentage;

public:
    void getData() {
        cin >> rollno >> name >> percentage;
    }

    void display() {
        if (percentage > 75)
            cout << name << endl;
    }
};

int main() {
    Student s[10];

    for (int i = 0; i < 10; i++)
        s[i].getData();

    cout << "Students with percentage greater than 75:\n";

    for (int i = 0; i < 10; i++)
        s[i].display();

    return 0;
}
