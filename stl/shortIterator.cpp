#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 1, 9, 5};

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // range based loop
    for (int &value : v)
    {
        value++;
        // cout << value<<" ";
    }
    for (int value : v)
    {

        cout << value << " ";
    }

    cout << endl;

    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    // vector<pair<int, int>>::iterator it1;
    for (auto it1 = v_p.begin(); it1 != v_p.end(); it1++)
    {
        cout << (*it1).first << " " << it1->second << endl;
    }
    cout << "---" << endl;

    for (pair<int, int> value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }
    cout << endl;

    return 0;
}