// Code by Harsh Deshmukh SY CSE-B 15
// Write a c++ code to create a class staff having data members as id and post. Accept and display data for 2 staff. Write member function definition inside the class

#include <iostream>
using namespace std;

class Staff
{
private:
    int id;
    string post;

public:
    void accept()
    {
        cout << "Enter Staff ID: ";
        cin >> id;

        cout << "Enter Staff Post: ";
        cin >> post;
    }

    void display()
    {
        cout << "\nStaff ID   : " << id;
        cout << "\nStaff Post : " << post << endl;
    }
};

int main()
{
    Staff s1, s2;

    cout << "Enter details of Staff 1\n";
    s1.accept();

    cout << "\nEnter details of Staff 2\n";
    s2.accept();

    cout << "\n    Staff Details    ";
    cout << "\n\nStaff 1:";
    s1.display();

    cout << "\nStaff 2:";
    s2.display();

    return 0;
}
