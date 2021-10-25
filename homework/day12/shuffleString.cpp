#include <bits/stdc++.h>
#define all(a) a.begin(), a.end()
using namespace std;

int main()
{

    string a, b, c;
    cin >> a >> b >> c;
    int n, m;
    n = a.length() + b.length();
    m = c.length();
    if (n == m)
    {
        a += b;
        sort(all(a));
        sort(all(c));
        if (a == c)
        {
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        
    }else{
        cout << "NO";
    }
    
    return 0;
}