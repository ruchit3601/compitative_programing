#include <bits/stdc++.h>
using namespace std;

int kadane(int arr[], int n)
{
    int ans = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (sum > ans)
        {
            ans = sum;
        }
        else if (sum < 0)
        {
            sum = 0;
        }
    }
    return ans;
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
    int a1[] = {1, 2, 3, 2, 5};
    int n = sizeof(a1) / sizeof(a1[0]);
    cout << kadane(a1, n);

    return 0;
}