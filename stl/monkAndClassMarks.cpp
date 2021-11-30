#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, multiset<string>> m;
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        int marks;
        string name;
        cin >> name >> marks;
        m[marks].insert(name);
    }
    auto last_it = --m.end();
    while(true){
        auto students = (*last_it).second;
        auto marks = last_it->first;
        for(auto i:students){
            cout << i << " " << marks<<endl;
        }
        if(last_it==m.begin())
            break;
        last_it--;
    }
}

// 3 Eve 78 Bob 99 Alice 78
    // https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE