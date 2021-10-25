#include <bits/stdc++.h>
using namespace std;

int findMissingElement(int arr[], int n)
{
    int sum = 0;
    sum = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
    {
        sum -= arr[i];
    }
    return sum;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "missing no is" << findMissingElement(arr, n);
    return 0;
}