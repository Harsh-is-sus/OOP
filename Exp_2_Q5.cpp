#include <iostream>
using namespace std;

namespace Physics
{
    string subject = "Physics";
}

namespace Chemistry
{
    string subject = "Chemistry";
}

int main()
{
    cout << "Subject from Physics namespace: "
         << Physics::subject << endl;

    cout << "Subject from Chemistry namespace: "
         << Chemistry::subject << endl;

    return 0;
}
