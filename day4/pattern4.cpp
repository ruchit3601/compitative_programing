#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;
    for (int r = 1; r <= n / 2; r++)
    {
        for (int i = 1; i <= n / 2 - r + 1; i++)
        {
            cout << " ";
        }
        for (int i = 1; i <= r ; i++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    if (n % 2 == 1)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int r = n / 2; r >= 1; r--)
    {
        for (int i = 1; i <= n / 2 - r + 1; i++)
        {
            cout << " ";
        }
        for (int i = 1; i <= r ; i++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}