#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int find_value;
    cin >> find_value;
    int lo = 0, hi = n - 1;

    while (hi - lo > 1)
    {
        int mid = (hi + lo) / 2;
        if (v[mid] < find_value)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }

        if(v[lo]==find_value){
            cout << lo << endl;
        }
        else if(v[hi]==find_value){
            cout << hi << endl;
        }
        else{
            cout << "Not Found";
        }
    }

    return 0;
}