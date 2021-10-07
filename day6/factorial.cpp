#include <iostream>
using namespace std;

int fact(int n)
{
    if ((n == 0) || (n == 1))
    {
        return 1;
    }

    return n * fact(n - 1);
}

int main()
{

    int n;
    cin >> n;
    // for (int i = 1; i <= n;i++){
    //     fact *= i;
    // }
    // cout << fact;

    cout << "factorial of " << n << "is" << fact(n);

    return 0;
}