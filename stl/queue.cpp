#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    q.push("abc");
    q.push("xyz");
    q.push("cdc");
    q.push("bbb");

    while(!q.empty()){
        cout << q.front()<<endl;
        q.pop();
    }

    return 0;
}