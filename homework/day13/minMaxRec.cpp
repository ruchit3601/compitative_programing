#include <bits/stdc++.h>
using namespace std;

int maxx(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    return max(arr[n - 1], maxx(arr, n - 1));
}

int minn(int arr[], int n)
{
    if (n == 1)
    {
        return arr[0];
    }
    return min(arr[n - 1], minn(arr, n - 1));
}

int main()
{
    int arr[] = {5, 3, 8, 6, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "min is:" << minn(arr, n) << endl;
    cout << "max is:" << maxx(arr, n);

    return 0;
}