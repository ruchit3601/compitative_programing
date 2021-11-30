
#include <bits/stdc++.h>
using namespace std;

float sum(float i, float &fact)
{
    if (i <= 0)
    {
        return 0;
    }
    float smallSum = sum(i - 1, fact);
    fact = fact * i;

    return smallSum + fact/(i+1.0);
}

int main()
{
    float n;
    cin >> n;
    float p = 1;
    float w = sum(n, p);
    cout << w;

    return 0;
}

// write down the recursive code to calculate the sum of series till n terms.
// 1 ! / 2 + 2 ! / 3 + 3 ! / 4 + 4 ! / 5 + 5 ! / 6 + .......