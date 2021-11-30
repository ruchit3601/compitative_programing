/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int maxJump(int arr[], int n)
{
    if (n <= 1)
        return 0;

    if (arr[0] == 0)
    {
        return -1;
    }

    int maxReach = arr[0];
    int steps = arr[0];
    int jumps = 1;

    for (int i = 1; i < n; i++)
    {
        if (i == n - 1)
            return jumps;

        maxReach = max(maxReach, i + arr[i]);
        steps--;
        if (steps == 0)
        {
            jumps++;
            if (i >= maxReach)
            {
                return -1;
            }
            steps = maxReach - i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = 11;
    cout << maxJump(arr, n);

    return 0;
}
