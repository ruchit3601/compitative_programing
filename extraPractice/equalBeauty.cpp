#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll T;
    cin >> T;
    while (T--)
    {
        ll n, k, b1, b2, res1 = 0, res2 = 0;
        ll m = INT_MAX;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll l = 1;
        ll r = n - 2;

        if (n == 2)
        {
            cout << 0 << endl;
            continue;
        }
        else if (n == 3)
        {
            cout << min(a[1] - a[0], a[2] - a[1]) << endl;
            continue;
        }
        for (ll i = 0; i < n - 1; i++)
        {
            res1 += abs(a[i] - a[(n - 1) / 2]);
        }
        for (ll i = 1; i < n; i++)
        {
            res2 += abs(a[i] - a[1 + (n - 1) / 2]);
        }
        m = min(res1, res2);
        while (l < r)
        {
            b2 = a[n - 1] - a[l];
            b1 = a[r] - a[0];
            m = min(m, abs(b1 - b2));
            if (b1 < b2)
            {
                l++;
            }
            else
            {
                r--;
            }
        }
        cout << m << endl;
    }
    return 0;
}