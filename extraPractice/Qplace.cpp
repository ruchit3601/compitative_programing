#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 1 && j == 1)
                {
                    cout << 'Q';
                }
                else if (i >= 3 && i == j)
                {
                    cout << 'Q';
                }
                else
                {
                    cout << '.';
                }
            }
            cout << endl;
        }
    }

    return 0;
}