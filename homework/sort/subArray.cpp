#include <bits/stdc++.h>

using namespace std;

void subarray(int arr[], int n)
{
    for (int size = 1; size <=n; size++)
    {
        for (int start = 0; start < n - size+1; start++)
        {
            for (int i = start; i < start + size; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    int n = 3;
    subarray(arr, n);

    return 0;
}