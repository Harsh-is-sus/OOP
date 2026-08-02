// Code by Harsh Deshmukh SY CSE-B 15
// Develop a class Account to accept account details and display the balance using functions defined outside the class


#include <iostream>
using namespace std;

class Account
{
private:
    int accNo;
    string name;
    float balance;

public:
    void accept();     
    void display();    
};


void Account::accept()
{
    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Balance: ";
    cin >> balance;
}


void Account::display()
{
    cout << "\n    Account Details    " << endl;
    cout << "Account Number : " << accNo << endl;
    cout << "Account Holder : " << name << endl;
    cout << "Balance        : " << balance << endl;
}

int main()
{
    Account a;

    a.accept();
    a.display();

    return 0;
}
