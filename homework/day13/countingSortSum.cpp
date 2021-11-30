#include <bits/stdc++.h>

using namespace std;

vector<int> allSubsetSum;

void go(vector<int> &v, int i, int &sum)
{
    if (i < 0)
    {
        allSubsetSum.push_back(sum);
        return;
    }

    go(v, i - 1, sum);
    sum += v[i];
    go(v, i - 1, sum);
    sum -= v[i];
}
// void go (vector < int >&v, int i, vector < int >&curSubset,vector < vector < int >>&allSubset)
// {
//     if(i<0){
//         allSubset.push_back(curSubset);
//         return;
//     }

//   go (v, i - 1, curSubset, allSubset);
//   curSubset.push_back (v[i]);
//   go (v, i - 1, curSubset, allSubset);
//   curSubset.pop_back ();

// }

int main()
{
    //   vector < vector < int >>allSubset;
    //   vector < int >curSubset;
    vector<int> v = {1, 2, 3};
    int sum = 0;

    //   go (v, v.size () - 1, curSubset, allSubset);
    go(v, v.size() - 1, sum);

    // for (auto subset:allSubset)
    //     {
    //     for (auto x:subset)
    // 	{
    // 	  cout << x << " , ";
    // 	}
    //       cout << endl;
    //     }

    for (auto s : allSubsetSum)
    {
        cout << s << endl;
    }
    cout << endl;

    return 0;
}
