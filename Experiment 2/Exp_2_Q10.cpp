#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int marks[5];

    cout << "Enter marks of 5 subjects:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Subject " << i + 1 << ": ";
        cin >> marks[i];
    }

    cout << "\n";
    cout << left << setw(15) << "Subject"
         << setw(10) << "Marks" << endl;

    cout << "------------------------" << endl;

    for (int i = 0; i < 5; i++)
{
    cout << "Subject " << i + 1 << "\t\t" << marks[i] << endl;
}

    return 0;
}
