#include <bits/stdc++.h>
using namespace std;

int getMinDiff(int arr[], int n, int k)
{

    sort(arr, arr + n);
    int minEl, maxEl;
    int result = arr[n - 1] - arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] >= k)
        {
            maxEl = max(arr[i - 1] + k, arr[n - 1] - k);
            minEl = min(arr[0] + k, arr[i] - k);
            result = min(result, maxEl - minEl);
        }
    }
    return result;
}

int main()
{
    int n, k;
    cin >> k >> n;
    int a1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a1[i];
    }
    sort(a1, a1 + n);
    cout << getMinDiff(a1, n, k);

    return 0;
}
// 5
// 10
// 2 6 3 4 7 2 10 3 2 1