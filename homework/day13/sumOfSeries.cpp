#include<bits/stdc++.h>
using namespace std;

float sum(float n){
    if(n==0){
        return 0;
    }
    return sum(n - 1) + (n)/(n+1);
}

int main(){
    float n;
    cin >> n;
    float w=sum(n);
    cout << w;

    return 0;
}


// write down the recursive code to calculate the sum of series till n terms.
// 1 / 2 + 2 / 3 + 3 / 4 + 4 / 5 + 5 / 6 + .......