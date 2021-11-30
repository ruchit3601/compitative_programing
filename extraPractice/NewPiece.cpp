#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        if ((a > 8 || a < 1) || (b > 8 || b < 1) || (p > 8 || p<1) || (q > 8 || q<1))
        {
            continue;
        }
        if (a == p && b == q)
        {
            cout << 0 << endl;
        }
        else if ((a + b) % 2 == 0 && (p + q) % 2 == 0)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
    return 0;
}