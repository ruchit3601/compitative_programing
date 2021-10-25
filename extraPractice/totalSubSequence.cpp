#include <bits/stdc++.h>
using namespace std;

void totalSubset(string input, string output, int index)
{
    if (index >= input.size())
    {
        cout << output << " ";

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
    string str;
    cin >> str;
    string output="";

    totalSubset(str, output, 0);

    return 0;
}