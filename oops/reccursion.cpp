#include<bits/stdc++.h>
using namespace std;

void fun(int n,int i)
{
    if(n==i+1){
        return;
    }
    for (int z = 0; z < n;z++){
        cout << n << " ";
    }
        fun(n + 1, i);
}

int main(){
    int i;
    cin >> i;
    fun(1,i);

    return 0;
}