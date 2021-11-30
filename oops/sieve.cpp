#include<bits/stdc++.h>
using namespace std;

const int N = 1e6;
int isPrime[N];

int main(){
    memset(isPrime, -1, sizeof(isPrime));
    isPrime[0] = 0;
    isPrime[1] = 0;
    for (int i = 2; i < N;i++){
        if(isPrime[i]==-1){
            for (int mul = 2 * i; mul < N;mul+=i){
                isPrime[mul] = 0;
            }
        }
    }
    int t;cin>>t;
    while(t--){
        int n;
        cin >> n;
        cout << (isPrime[n] == -1 ? "is prime" : "not prime");
    }

        return 0;
}