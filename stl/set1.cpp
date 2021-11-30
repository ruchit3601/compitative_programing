#include <bits/stdc++.h>
using namespace std;
void print(unordered_set<string> &s)
{
    cout << "size of set=" << s.size() << endl;
    cout << "unique strings are:";
    for (auto p : s)
    {
        cout << p << " " << endl;
    }
}

int main()
{
    unordered_set<string> s;
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        string s1;
        cin >> s1;
        s.insert(s1);
    }
    int q;
    cout << "enter q";
    cin >> q;
    while(q--){
        string str;
        cout << "enter string";
        cin >> str;
        if(s.find(str)==s.end()){
            cout << "No";
        }
        else
            cout << "YEA";
    }
    print(s);
    return 0;
}