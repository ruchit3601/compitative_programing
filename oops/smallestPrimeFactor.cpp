#include <bits/stdc++.h>
using namespace std;

const int N =10;

int main()
{
    int spf[N+1]={0};
    spf[0] = 0;
    spf[1] = 1;
    for (int i = 2; i <=N;i++){
        if(spf[i]==0){
            spf[i] = i;
            for (int j = 2 * i; j <=N;j+=i){
                if(spf[j]==0){
                    spf[j] = i;
                }
            }
        }
    }
    for (int i = 0; i <=N; i++)
        cout << i << ": " << spf[i] << "\n";

}
