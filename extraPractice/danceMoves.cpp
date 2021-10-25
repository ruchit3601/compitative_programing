#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int count = 0;
    if(y=NULL){
        return x;
    }
    while (x != y)
    {
        if (x == y)
        {
            return 0;
        }
        else if (x < y)
        {
            x += 2;
            count++;
        }
        else
        {
            x -= 1;
            count++;
        }
    }
    cout << count;

    return 0;
}