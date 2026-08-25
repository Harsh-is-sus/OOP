// Code by Harsh Deshmukh SY CSE-B 15
// WAP to create a class staff having data members as name, post and salary. Accept data for 5 staff and display the staff details having post = "HOD".

#include <iostream>
using namespace std;

class Staff {
    string name, post;
    float salary;

public:
    void getData() {
        cin >> name >> post >> salary;
    }

    void display() {
        if (post == "HOD")
            cout << name << " " << post << " " << salary << endl;
    }
};

int main() {
    Staff s[5];

    for (int i = 0; i < 5; i++)
        s[i].getData();

    cout << "HOD Details:\n";

    for (int i = 0; i < 5; i++)
        s[i].display();

    return 0;
}
