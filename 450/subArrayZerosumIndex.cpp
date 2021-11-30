#include <bits/stdc++.h>

using namespace std;

void hasZeroSumSubarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == 0)
            {
                cout << i << " " << j << endl;
            }
        }
    }
}

int main()
{

    int nums[] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};

    int n = sizeof(nums) / sizeof(nums[0]);

    hasZeroSumSubarray(nums, n);
    return 0;
}
