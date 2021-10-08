#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the size of an array=";
    cin >> n;
    int arr[n];
    cout << "enter the " << n << " values for an array=";

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "enter the value u want to search:=";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    cout << "total occurance of x is :=" << count << " ";

    return 0;
}