// Code by Harsh Deshmukh SY CSE-B 15
// Write a program to store and display student information using functions defined outside the class

#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:
    void getData();      
    void displayData(); 
};


void Student::getData()
{
    cout << "Enter Roll Number: ";
    cin >> rollNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;
}


void Student::displayData()
{
    cout << "\n    Student Information    " << endl;
    cout << "Roll Number : " << rollNo << endl;
    cout << "Name        : " << name << endl;
    cout << "Marks       : " << marks << endl;
}

int main()
{
    Student s;

    s.getData();
    s.displayData();

    return 0;
}
