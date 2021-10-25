#include <bits/stdc++.h>
using namespace std;

int findPairs(int arr[], int n, int k)
{
    if (n % 2 == 1)
    {
        return 0;
    }
    int visited[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (visited[i])
        {
            continue;
        }
        int j = i + 1;
        while (j < n)
        {
            if (!visited[j] && (arr[i] + arr[j]) % k == 0)
            {
                cout << arr[i] << " " << arr[j]<<"\n";
                visited[j] = 1;
                break;
            }
            j++;
        }
        if (j == n)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int arr[] = {3, 4, 2, 1, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;
    cin >> k;
    if (findPairs(arr, n, k))
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}