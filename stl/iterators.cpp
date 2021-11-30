#include <bits/stdc++.h>
using namespace std;

void print(vector<pair<int, int>> &v){
    for (int i = 0; i < v.size();i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}

    int main()
{
    vector<int> v = {2, 1, 9, 5};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // vector<int>::iterator it;
    // // it = v.begin()+1;
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;
    // sort(v.begin(), v.end());
    // for (it = v.begin(); it != v.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    vector<pair<int, int>> v_p;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v_p.push_back({x, y});
    }
    print(v_p);
    // vector<pair<int, int>>::iterator it1;
    // for (it1 = v_p.begin(); it1 != v_p.end(); it1++)
    // {
    //     cout << (*it1).first << " " << it1->second << endl;
    // }
    cout << endl;

    return 0;
}