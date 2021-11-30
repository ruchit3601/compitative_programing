#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << [](int x)
    { return x + 3; }(2)
         << endl; // x value is passed;

    vector<int> v = {1, 4, -6};
    cout << all_of(v.begin(), v.end(), [](int x)
                   { return x > 0; })
         << endl;

    cout << any_of(v.begin(), v.end(), [](int x)
                   { return x > 0; })
         << endl;

    int arr[] = {2, 46, 45};
    int n = 3;

    cout << none_of(arr, arr + n, [](int x)
                    { return x < 0; })
         << endl;
    int sum = accumulate(arr, arr+n,0);
    cout << "sum=" << sum << endl;

    int a = 10;
    cout << (a>> 1);

    return 0;
}
//  0 false
//  1 true