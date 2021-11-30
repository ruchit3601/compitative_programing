#include <bits/stdc++.h>
using namespace std;

double eps = 1e-6;

int main()
{
    double x;
    cin >> x;
    double low = 1, high = x, mid;
    while (high - low > eps)
    {
        mid = (high + low) / 2;
        if (mid * mid < x)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }
    cout << low << endl;
    // cout<<setprecision(10)
    cout << sqrt(x);

    return 0;
}