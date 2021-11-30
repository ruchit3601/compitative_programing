#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 7, 2, 10, 6, 9, 8, 2, 4, 1, 10, 1, 12, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxi = *max_element(arr, arr + n);
    int freq[maxi + 1] = {0};

    // 1. make the freq array
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }

    // 2. make the prefix of freq array
    for (int i = 1; i < maxi + 1; i++)
    {
        freq[i] += freq[i - 1];
    }

    // 3. fill the value into temp array in reverse order
    int temp[n];
    for (int i = n - 1; i >= 0; i--)
    {
        temp[freq[arr[i]] - 1] = arr[i];
        freq[arr[i]]--;
    }

    // make arr=temp
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;

    return 0;
}