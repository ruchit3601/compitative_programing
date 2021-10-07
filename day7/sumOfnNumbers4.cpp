#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0.0;
    int fact = 1;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;

        sum += (i * (i + 2.0)) / (fact + (fact * (i + 1.0)));
    }
    cout << sum << " ";
    return 0;
}