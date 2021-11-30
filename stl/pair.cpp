#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;
    // p = make_pair(2, "ruchit");
    p = {1, "rock"};
    // by ref
    pair<int, string> &p1 = p;
    p1.first = 3;
    p1.second = "yash";
    cout << p.first << " " << p.second << endl;
    cout << p1.first << " " << p1.second << endl;

    // pair array 1
    pair<int, int> p_array[3];
    p_array[0] = {1, 2};
    p_array[1] = {3, 4};
    p_array[2] = {5, 6};
    swap(p_array[0], p_array[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << " " << p_array[i].second << endl;
    }

// pair arry 2
    pair<int, int> p1_array[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> p1_array[i].first >> p1_array[i].second;
    }

    for (int i = 0; i < 3; i++)
    {
        cout << p1_array[i].first << " " << p1_array[i].second << endl;
    }
}