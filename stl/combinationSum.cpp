#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

void generate(vector<int> &v, int value, int i, int sum, vector<int> &temp)
{
    if (sum == value)
    {
        ans.push_back(temp);
        return;
    }

    if (sum > value)
    {
        return;
    }

    if (sum < value)
    {
        for (int k = i; k < v.size(); k++)
        {
            sum += v[k];
            temp.push_back(v[k]);
            generate(v, value, i, sum, temp);
            sum -= v[k];
            temp.pop_back();
        }
    }
}

int main()
{
    vector<int> v = {7, 2, 5, 6};
    sort(v.begin(), v.end());

    int value = 16;
    int sum = 0;
    vector<int> empty;
    
    generate(v, value, 0, sum, empty);

    for (auto i : ans)
    {
        for (auto x : i)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}