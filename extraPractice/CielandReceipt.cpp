#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p;
        cin >> p;
        int count = 0;
        for (int i = 11; i >= 0; i--)
        {
            int currentPow = pow(2, i);
            while (p >= currentPow)
            {
                p = p - currentPow;
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}

// https://www.codechef.com/problems/CIELRCPT