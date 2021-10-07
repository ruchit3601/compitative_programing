#include <iostream>
using namespace std;

int main()
{
    int n;
    float sum = 0;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {

        sum += (i / (i + 1.0));
    }
    cout << sum << " ";
    return 0;
}