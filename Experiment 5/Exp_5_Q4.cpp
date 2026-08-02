// Code by Harsh Deshmukh SY CSE-B 15
// Write an inline function to calculate simple interest

#include <iostream>
using namespace std;

class Interest
{
private:
    float p, r, t;

public:
    void getData();
    inline float calculate();
};

void Interest::getData()
{
    cout << "Enter Principal, Rate and Time: ";
    cin >> p >> r >> t;
}

inline float Interest::calculate()
{
    return (p * r * t) / 100;
}

int main()
{
    Interest obj;

    obj.getData();

    cout << "Simple Interest = " << obj.calculate();

    return 0;
}
