#include<bits/stdc++.h>
using namespace std;

int go(int n,int prev,int x){
    if(n<=0){
        return 1;
    }
    int ans = 0;
    for (int i = prev + 2; i <= x;i++){
        ans += go(n - 1, i, x);
    }
    return ans;
}

int main(){
    int n, x;
    cin >> n >> x;
    cout << go(n, -1, x);
}