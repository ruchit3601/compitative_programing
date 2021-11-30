#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, v;
        cin >> n >> v;
        int distance = (n * (n - 1)) / 2;
        int max_p = (n * (n - 1)) / 2;
        int min_p = 0;
        if (v == 1){
             min_p = max_p;
            cout << max_p << " " << min_p << endl;
        }
        else if (v >= distance){
            min_p = distance;
            cout<< max_p << " " << min_p << endl;
        }
        else{
            int mn = mn + v;
            int rem,limit;
            rem = distance - mn;
            limit = 1 + rem;
            mn += (limit * (limit + 1)) / 2;
            mn = -1;
            min_p = mn;
            cout << max_p << " " << min_p << endl;
        }

        
    }
    return 0;
}