#include<bits/stdc++.h>
using namespace std;

void print(vector<int>  &out){
    for (int i : out){
        cout << i<<" ";
    }
    cout << "\n";
}

    void printCombination(int i, int n, vector<int> &out)
{
    if(n==0){
        print(out);
    }
    for (int j = i; j <= n;j++){
        out.push_back(j);
        printCombination(j, n - j, out);
        out.pop_back();
    }
}

int main()
{
    int n = 4;
    vector<int> out;
    printCombination(1, n, out);
}