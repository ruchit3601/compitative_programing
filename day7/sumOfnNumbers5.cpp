#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0.0;
    int fact = 1;
    float var = 0.0;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        var += i;
        // cout << var<<"\n";
        fact = fact * i;

        sum += (var / fact);
    }
    cout << sum << " ";
    return 0;
}