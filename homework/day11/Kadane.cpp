#include <bits/stdc++.h>
using namespace std;

int maxSubSum(int arr[], int n)
{
    int maxi = INT_MIN, maximum_till_now = 0;

    for (int i = 0; i < n; i++)
    {
        maximum_till_now = maximum_till_now + arr[i];
        if (maxi < maximum_till_now)
        {
            maxi = maximum_till_now;
        }
        if (maximum_till_now < 0)
        {
            maximum_till_now = 0;
        }
    }
    return maxi;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxsum = maxSubSum(arr, n);
    cout << maxsum;

    return 0;
}