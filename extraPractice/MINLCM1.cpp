#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, k;
        cin >> x >> k;
        int i, j;
        i = (x * 2);
        j = (x * k);
        j *= (j - 1);
        cout << i << j;
    }
    return 0;
}