#include<bits/stdc++.h>
using namespace std;

vector<string> valid;

void generate(string &s,int open,int close){

if(open==0 && close==0){
    valid.push_back(s);
}
    if(open>0){
        s.push_back('(');
        generate(s, open - 1, close);
        s.pop_back();
    }
    if(close>0){
        if(open<close){
            s.push_back(')');
            generate(s, open, close - 1);
            s.pop_back();
        }
    }
}

int main(){
    string s = "";
    int n;
    cin >> n;
    generate(s, n,n);
    for(auto i: valid){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}