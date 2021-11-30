#include <bits/stdc++.h>
using namespace std;

void go(vector<int> &v, int i, vector<int> &curSubset, vector<vector<int>> &allSubset)
{
    if(i<0){
        reverse(curSubset.begin(), curSubset.end());
        allSubset.push_back(curSubset);
        reverse(curSubset.begin(), curSubset.end());
        return;
    }
    go(v, i - 1, curSubset, allSubset);
    curSubset.push_back(v[i]);
    go(v, i - 1, curSubset, allSubset);
    curSubset.pop_back();
}

int main()
{
    vector<vector<int>> allSubsets;
    vector<int> curSubset;

    vector<int> v = {1, 2, 3};
    go(v, v.size()-1, curSubset, allSubsets);

    for (auto subset : allSubsets)
    {
        for (int x : subset)
        {
            cout << x << " , ";
        }
        cout << endl;
    }
    int arr[] = {1, 2, 3, 4};

    return 0;
}