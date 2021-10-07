#include <iostream>
using namespace std;

int main()
{

    int a = 0, b = 1, n;
    cin >> n;
    cout << a << " " << b << " ";
    for (int i = 0; i <= n; i++)
    {
        int c;
        c = a + b;
        a = b;
        b = c;
        cout << c << " ";
        // while(c<=n){
        //     cout << c << " ";
        //     a = b;
        //     b = c;
        //     c = a + b;
        // }
    }

    return 0;
}