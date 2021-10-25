#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int n, k;
        cin >> n >> k;
        int res= 2* (n-k);
        res += 2 * ((k - 1) / 2);
        cout <<res << "\n";
        
    }

    return 0;
}