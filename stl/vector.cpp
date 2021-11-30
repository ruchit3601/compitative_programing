#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> &v){
    for (int i = 0; i < v.size();i++){
        cout << v[i]<<" ";
    }
    cout << endl;
    v.push_back(50);
}

int main(){
    
    int n;
    cout << "enter size of vector";
    cin >> n;
    vector<int> v(n);
    // for (int i = 0; i < n;i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    cout<<"size of vector:"<<v.size()<<endl;
    v.push_back(20);

    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
        // printvec(v);
        cout << "size of vector:" << v.size() << endl;
        // v.pop_back();
        // v.pop_back();
        printvec(v);
        cout << "size of vector:" << v.size() << endl;
        vector<int> v1=v;
        printvec(v1);

        return 0;
}