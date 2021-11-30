#include <bits/stdc++.h>
using namespace std;

int sumRec(int arr[], int n)
{

    if (n < 0)
    {
        return 0;
    }

    return sumRec(arr, n - 1) + arr[n];
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << sumRec(arr, n - 1);

    return 0;
}