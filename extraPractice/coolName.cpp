#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = 0;
        sort(s.begin(), s.end());
        
        for (int i = 0; i <s.length();i++){
            ans += ((s[i]-'a'+1) * (i + 1));
        }
        cout << ans<<endl;
    }

    return 0;
}
