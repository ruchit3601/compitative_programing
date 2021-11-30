#include <bits/stdc++.h>
using namespace std;
void print(set<int> &s){
    cout << endl
         << "--------";
    cout <<"size"<< s.size() << endl;
    for(auto p:s){
        cout << p<<" "<<endl;
    }
}

int main(){
    set<int> s;
    // s.insert(2);
    // s.insert(3);
    for(auto i:s){
        int x;
        cin >> x;
        s.insert(x);
    }
    // for(auto it:s){
    //     cout << it << endl;
    //     cout<<"size =" << s.size()<<endl;
    // }
    print(s);
    return 0;
}