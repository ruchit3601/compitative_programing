#include<bits/stdc++.h>
using namespace std;
void print(map<string,int> &m){
    cout << m.size()<<endl;

    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}

int main(){
    map<string, int> m;
    m["abc"] = {2}; // log(n)
    m.insert(make_pair("pqr", 10));
    m["fgh"] = {5};
    m.insert(make_pair("xyz", 4));
    cout << m["aaa"];
    cout << endl;
    // for(auto i:m){
    //     cin >> m.insert(make_pair[i]);
    // }

    // map<string, int>::iterator it;
    // for (it = m.begin(); it != m.end();it++){
    //     cout << it->second << " " << (*it).first << endl;
    // }
    // print(m);
    m["abc"] = {6};
    // print(m);
    auto it = m.find("bc");
    if(it==m.end()){
        cout << "no value";
    }   
    else{
        cout << it->first << " " << it->second;
    }
    m.erase("fgh");
    if(it!=m.end())
        m.erase(it);
    cout << endl;
    print(m);

    return 0;
}