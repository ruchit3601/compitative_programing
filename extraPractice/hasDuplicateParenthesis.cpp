#include <bits/stdc++.h>
using namespace std;

bool hasDuplicateParenthesis(string exp)
{
    if (exp.length() <= 3)
    {
        return false;
    }

    stack<char> st;

    for (char c : exp)
    {
        if (c != ')')
        {
            st.push(c);
        }
        else{
            if(st.top()=='('){
                return true;
            }

            while(st.top()!='('){
                st.pop();
            }
            st.pop();
        }
    }
}

int main()
{
    string exp = "((x+y))"; // assumes valid expression

    if (hasDuplicateParenthesis(exp))
    {
        cout << "The expression has duplicate parenthesis.";
    }
    else
    {
        cout << "The expression does not have duplicate parenthesis";
    }

    return 0;
}