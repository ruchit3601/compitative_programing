#include<bits/stdc++.h>
using namespace std;


void print(unordered_set<int> s){
    for(auto i: s){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    unordered_set<int> m;
    m.insert(5);
    m.insert(9);
    print(m);

    return 0;
}