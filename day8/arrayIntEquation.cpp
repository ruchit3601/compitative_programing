#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {1, 2, 3};
    int n;
    n = 3;
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        ans += arr[j] * (sum - arr[j]);
    }
    cout << ans << "\n";
    cout << sum;

    return 0;
}