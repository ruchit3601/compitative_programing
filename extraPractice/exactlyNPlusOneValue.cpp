#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        // cout << (1 << n);
        cout << "1 ";
        for (int i = 0; i < n; i++)
        {
            cout << (1ll << i)<<" ";
        }
        cout << endl;
    }
    return 0;
}
