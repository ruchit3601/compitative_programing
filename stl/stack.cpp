#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(5);
    s.push(8);
    s.push(9);
    int n;
    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}