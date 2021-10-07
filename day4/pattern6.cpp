#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int r = 1; r <= n; r++)
    {
        // for (int i = 1; i <=n - r;i++){
        //     cout << " ";
        // }
            int max = r;
        for (int i = 1; i <= max; i++)
        {
            cout <<(char)(i+64)<< " ";
        }
        for (int i = max - 1; i >= 1; i--)
        {
            cout <<(char)(i+64)<<" ";
        }
        cout << "\n";
    }
    return 0;
}