#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int a, b, p, q;
        cin >> a >> b >> p >> q;
        // cout << a % p;
        // cout << b % q;
        if (p % a == 0 && q % b == 0 && (p / a == q / b || p / a - q / b) == 1)
        {
            cout << "yes";
        }
        else
            cout << "NO";
    }
}

// Alice and Bob are two friends.Initially, the skill levels of them are zero.They work on alternative days,
//  i.e one of Alice and Bob works on the odd - numbered days(1, 3, 5,…) and the other works on the
//  even - numbered days(2, 4, 6,…).The skill levels of Alice and Bob increase by A, B respectively on the
//  days they work.

//                                                                                                                                                                                                                                                                                           Determine if it is possible that the skill levels of Alice and Bob become exactly P,
//     Q respectively on some day