#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int, string> &m){
    cout << m.size() << endl;
    for(auto p:m){
        cout << p.first << " " << p.second << endl;
    }
}

    int main()
{
    unordered_map<int, string> m;
    m[0] = {"ruchit"};
    m[9] = "abc";
    m.insert(make_pair(2, "yash"));

    // unordered_map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end();it++){
    //     cout << it->first << " " << it->second<<endl;
    // }
    for(auto it:m){
        cout << it.first << " " << it.second << endl;
    }
    cout << endl;
    m.insert(make_pair(4, "bcd"));
    print(m);

    return 0;
}
// unsorted 
//  key value pairs are stored unordered