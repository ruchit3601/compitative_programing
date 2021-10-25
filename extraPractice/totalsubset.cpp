#include <bits/stdc++.h>
using namespace std;

void totalSubset(vector<int> input, vector<int> output,int index)
{
    if(index>=input.size()){
        for (int i = 0; i < output.size();i++){
            cout<<output[i]<<" ";
        }
        cout << endl;
        return;
    }
    // nahi ka
    totalSubset(input, output, index + 1);
    
    //  lene ka
    output.push_back(input[index]);
    totalSubset(input, output, index + 1);
}

int main()
{
    int n;
    cin >> n;
    vector<int> input(n);
    for (int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    vector<int> output;

    totalSubset(input, output, 0);

    return 0;
}