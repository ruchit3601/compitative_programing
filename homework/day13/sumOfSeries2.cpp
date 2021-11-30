#include <bits/stdc++.h>
using namespace std;

float sum(float i, float &fact, float &sum1)
{
    if (i <= 0)
    {
        return 0;
    }
    float smallSum = sum(i - 1, fact, sum1);
    fact = fact * i;
    sum1 = sum1 + i;

    return smallSum + (sum1 / fact);
}

int main()
{
    float n;
    cin >> n;
    float p = 1;
    float s = 0;
    float w = sum(n, p, s);
    cout << w;

    return 0;
}

// write down the recursive code to calculate the sum of series till n terms.
// (1)/(1!)+ (1+2)/2!+ (1+2+3)/3!+ (1+2+3+4)/4! +(1+2+3+4+5)/5! +.......