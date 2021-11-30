#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin >> n;
        set<string> s;
        for (int i = 0; i < n;i++){
            string names;
            cin >> names;
            s.insert(names);
        }
        for(auto it: s){
            cout << it << endl;
        }
    }
}



// https://www.hackerearth.com/problem/algorithm/monks-birthday-party/?fbclid=IwAR3COuGp9LqoHKWOnfS-duVdKrF0Vx5shbCbGeiWqSgkdoA2z9926vNy5Ew