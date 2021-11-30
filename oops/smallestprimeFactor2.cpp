#include<bits/stdc++.h>
#define MAX_SIZE 100001
using namespace std;

int spf[MAX_SIZE];

void go(vector<int>& ans,int n){
    if(n==spf[n]){
        ans.push_back(n);
        return;
    }
    ans.push_back(spf[n]);
    go(ans, n / spf[n]);
}

vector<int> getPrimeFactorization(int n){
    vector<int> ans;
    go(ans, n);
    return ans;
}

    int main()
{
    for (int i = 0; i < MAX_SIZE;i++){
        spf[i] = i;
    }

    for (int i = 2; i < MAX_SIZE;i++){
        if(spf[i]==i){
            for (int j = 2 * i; j < MAX_SIZE;j+=i){
                if(spf[j]==j){
                    spf[j] = i;
                }
            }
        }
    }

        int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> primeFactor=getPrimeFactorization(n);

        for(int p:primeFactor){
            cout << p << "*";
        }
        cout << endl;
    }

    return 0;
}