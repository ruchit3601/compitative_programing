#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pref[n];
    pref[0] = arr[0];

    for (int i = 1; i < n;i++){
        pref[i] = pref[i-1] + arr[i];
    }

    // for (int i = 0; i <n;i++){
    //     cout << pref[i] << " ";
    // }
    int q;
    cin >> q;
    for (int i = 0; i < q;i++){
        int l, r,sum=0;
        cin >> l >> r;
        sum = pref[r] - (l==0?0:pref[l - 1]);
        cout << sum<<endl;
    }

        return 0;
}