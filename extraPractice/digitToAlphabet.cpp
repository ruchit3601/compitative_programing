#include <bits/stdc++.h>
using namespace std;

void digitToAlphabet(int n, string arr[] )
{
    if (n == 0)
    {
        return;
    }
    digitToAlphabet(n / 10, arr);
    int num = n % 10;

    cout <<arr[num]<<" ";
}

int main()
{
    string arr[7] = {"zero", "one", "two", "three", "four", "five", "six"};
    int n;
    cin >> n;
    digitToAlphabet(n, arr);

    return 0;
}