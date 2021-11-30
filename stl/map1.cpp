#include <bits/stdc++.h>
using namespace std;
void print(map<string, int> &m)
{
    cout << m.size() << endl;

    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for (auto i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    print(m);
    return 0;
}

// given N string, print unique strings in lexo order with its frequency;