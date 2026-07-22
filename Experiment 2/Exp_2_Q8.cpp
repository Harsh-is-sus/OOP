#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    float average;
    cout << "Enter the number of elements: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter " << n << " elements:\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    average = (float)sum / n;
    cout << "\nSum = " << sum << endl;
    cout << "Average = " << average << endl;

    delete[] arr;

    return 0;
}
