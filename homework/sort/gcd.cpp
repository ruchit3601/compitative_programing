#include <bits/stdc++.h>
using namespace std;

int gcd(int x,int y)
{
    if(x<y){
        swap(x, y);
    }
    if(y==0){
        return x;
    }
    
    return gcd(x%y,y);
}

int main()
{
    int a,b;
    cin >> a>>b;
    cout << gcd(a, b);

    return 0;
}