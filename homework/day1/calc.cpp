#include<iostream>
using namespace std;

int main(){
    int a,b,res;
    char op;
    cout << "enter 2 int numbers for the calculation"<< "\n";
    cin >> a >> b;
    cout << "enter the operator"<<"\n";
    cin >> op;
    if(op=='+'){
        res = a + b;
    }
    else if(op=='-'){
        res = a - b;
    }
    else if (op == '*')
    {
        res = a * b;
    }
    else if (op == '/')
    {
        res = a / b;
    }
    else{
        cout << "wrong operator"<<"\n";
    }
    cout <<" "<< res;
    return 0;
}