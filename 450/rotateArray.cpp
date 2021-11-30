#include <bits/stdc++.h>
using namespace std;

void rotate(int arr[], int n)
{

    int temp = arr[0];
    // cout<<temp;
    for (int j = 1; j < n; j++)
    {
        arr[j - 1] = arr[j];
        // j--;
    }
    arr[n - 1] = temp;
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int a1[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a1) / sizeof(a1[0]);
    int k = 3;
    for (int i = 0; i < k; i++)
    {
        rotate(a1, n);
    }
    print(a1, n);

    return 0;
}