// Code by Harsh Deshmukh SY CSE-B 15
#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    cout << "Enter an integer: ";
    cin >> *ptr;
    cout << "The entered integer is: " << *ptr << endl;
    delete ptr;

    return 0;
}
