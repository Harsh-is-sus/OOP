// Code by Harsh Deshmukh SY CSE-B 15
// Write a program to define a class student having data members name and roll no. Accept and display data for one object. Define the member function inside the class


#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;

public:
    void accept()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;
    }

    void display()
    {
        cout << "\n    Student Details    " << endl;
        cout << "Name        : " << name << endl;
        cout << "Roll Number : " << rollNo << endl;
    }
};

int main()
{
    Student s;

    s.accept();
    s.display();

    return 0;
}
