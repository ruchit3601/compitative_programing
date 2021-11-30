#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int arr[n];
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // sort(arr, arr + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
    auto it = s.upper_bound(25);

    if (it == s.end())
    {
        cout << "not found";
    }
    else
        cout << *it << endl;
    return 0;
}