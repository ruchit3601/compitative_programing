#include <iostream>
using namespace std;

int main()
{
    int n, s;
    cin >> s >> n;
    for (int r = 1; r <= n; r++)
    {
        int max = r;
        for (int i = s; i <= max; i++)
        {
            cout << i;
        }

        cout << "\n";
    }
    for (int r = n; r >= 1; r--)
    {
        int max = r;
        for (int i = s; i <= max; i++)
        {
            cout << i;
        }

        cout << "\n";
    }
    return 0;
}