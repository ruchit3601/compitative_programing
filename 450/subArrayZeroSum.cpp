#include <bits/stdc++.h>

using namespace std;

bool hasZeroSumSubarray(int arr[], int n)
{
    unordered_set<int> v;
    v.insert(0);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (v.find(sum) != v.end())
        {
            return true;
        }
        else
        {
            v.insert(sum);
        }
    }
    return false;
}

int main()
{

    int nums[] = {3, 4, -7, 3, 1, 3, 1, -4, -2, -2};
    int target = 0;

    int n = sizeof(nums) / sizeof(nums[0]);

    hasZeroSumSubarray(nums, n) ? cout << "exist" : cout << "not";

    return 0;
}
