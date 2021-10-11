#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, -2, 5};
    int n = 5;
    int sum = 0;
    cout << "subArray is=";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "sum=";
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum;

    return 0;
}