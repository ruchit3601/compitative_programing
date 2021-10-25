#include <bits/stdc++.h>
using namespace std;

int expoRec1(int n)
{
    if (n == 0)
    {
        return 1;
    }
    int ans = expoRec1(n / 2);

    if(n&1){
        return 2 * ans*ans;
    }
    else{
        return ans*ans;
    }

}

int expoRec(int n)
{
    if (n == 0)
    {
        return 1;
    }

    return 2 * expoRec(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << expoRec1(n);

    return 0;
}