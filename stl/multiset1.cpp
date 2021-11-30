#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, m;
        cin >> n >> m;
        multiset<long long> candy;
        for (int i = 0; i < n+m;i++){
            long long candy_ct;
            cin >> candy_ct;
            if(i<n)
                candy.insert(candy_ct);
            else{
                auto it = candy.find(candy_ct);
                if(it !=candy.end())
                    cout << "YES\n";
                else
                    cout << "NO\n";
            }
                   
        }
    }
    return 0;
}

