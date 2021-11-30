#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> allSubset;

void generate(vector<int> v,int i,vector<int> subset){

    if(i==v.size()){
        allSubset.push_back(subset);
        return;
    }

    generate(v, i + 1, subset);
    subset.push_back(v[i]);
    generate(v, i + 1, subset);
    subset.pop_back();
}

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> empty;
    for (int i = 0; i < n;i++){
        cin >> v[i];
    }
    generate(v, 0, empty);
    for(auto i: allSubset){
        for(auto x: i){
            cout << x << " ";
        }
    }

        return 0;
}
