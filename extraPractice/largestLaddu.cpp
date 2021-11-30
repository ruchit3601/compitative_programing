#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        vector<int> v;
        int n;
        cin >> n;
        int size = pow(2, n);
        for (int i = 0; i < size; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        auto it = v.begin();
        auto it1 = --v.end();
        if (*it1 - *it <= 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}