#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ll T;
    cin >> T;
    while(T--){
        ll n,i;
        cin >> n;
        if (n==1){
            cout << 1 << " " << 1;
        }
        else{
            for (i = 1; i < n;i++){
                cout << i << " ";
            }
            ll ans = pow(2, n);
            cout << i - 1 << " " << ans - n * (n + 1) / 2 + 1;
        }
        cout << endl;
    }
    return 0;
}