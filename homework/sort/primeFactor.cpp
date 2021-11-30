#include <bits/stdc++.h>
using namespace std;

vector<int> primeFactor(int n)
{
    vector<int> factor;
    int value = n;

    for (int i = 2; i*i<=value; i++)
    {
        while (n % i == 0)
        {
            factor.push_back(i);
            n /= i;
        }
       
    }
    if (n > 1)
    {
        factor.push_back(n);
    }
    return factor;
}

int main()
{
    int n;
    cin >> n;
    vector<int> factor =primeFactor(n);
    for(auto i:factor){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}