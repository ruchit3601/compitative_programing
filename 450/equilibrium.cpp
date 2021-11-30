#include <bits/stdc++.h>

using namespace std;

void findEquilibriumIndex(int arr[], int n)
{

    int prefix[n], lsum, rsum;
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int total = accumulate(arr, arr + n, 0);
    for (int i = 0; i < n; i++)
    {

        lsum = (prefix[i] - arr[i]);
        rsum = (total - prefix[i]);
        if (lsum == rsum)
        {
            cout << i << " ";
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<prefix[i]<<" ";
    // }
}
// 1 3 9 13 13 12

int main()
{

    int nums[] = {0, -3, 5, -4, -2, 3, 1, 0};

    int n = sizeof(nums) / sizeof(nums[0]);

    findEquilibriumIndex(nums, n);
    return 0;
}
