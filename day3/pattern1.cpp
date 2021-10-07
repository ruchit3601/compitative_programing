#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int r = 1; r <= n; r++)
    {
        for (int i = 1; i <= n - r; i++)
        {
            cout << " ";
        }
        for (int i = 1; i <= r; i++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}