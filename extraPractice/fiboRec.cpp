#include <bits/stdc++.h>
using namespace std;

int fiboRec(int n)
{
    if (n == 1||n==0)
    {
        return n;
    }

    return fiboRec(n-1)+ fiboRec(n - 2);
}

int main()
{
    int n;
    cin >> n;
    cout << fiboRec(n);

    return 0;
}