#include<bits/stdc++.h>
using namespace std;

int subSequence(string str,string output[]){
    if(str.length()==0){
        output[0] = "";
        return 1;
    }
    int ans = subSequence(str.substr(1), output);
    for (int i = 0; i < ans;i++){
        output[i + ans] = str[0] + output[i];
    }
    return 2 * ans;
}

int main(){
    string str="abcd";
    string output[100];
    int outputSize=subSequence(str, output);
    for (int i = 0; i < outputSize;i++){
        cout << output[i] << endl;
    }
    cout << outputSize;
    

    return 0;
}