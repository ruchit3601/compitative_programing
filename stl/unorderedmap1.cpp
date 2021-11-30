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
    unordered_map<string, int> m;
    int n;
    cout << "enter the no of string:=";
    cin >> n;
    for (auto i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    int q;
    cout << "enter the no of string to find the query:=";

    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        cout << "frequency=";
        cout << m[s] << endl;
    }
    return 0;
}

// given N string, and q quries. in each query u r given a string print frequency of that string