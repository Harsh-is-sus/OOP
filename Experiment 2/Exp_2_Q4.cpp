#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int rollno;
    string name;
    float marks;

public:
    void accept();
    void display();
};

void Student::accept()
{
    cout << "Enter Roll No: ";
    cin >> rollno;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;
}

void Student::display()
{
    cout << "\nStudent Details\n" << endl;
    cout << "Roll No: " << rollno << endl;
    cout << "Name: " << name << endl;
    cout << "Marks: " << marks << endl;
}

int main()
{
    Student s;
    s.accept();
    s.display();
    return 0;
}
