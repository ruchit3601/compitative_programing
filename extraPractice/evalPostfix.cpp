
#include <bits/stdc++.h>
using namespace std;

int evalPostfix(string exp)
{
    stack<int> st;
    for (char c : exp)
    {
        if (c >= '0' && c <= '9')
        {
            st.push(c-'0');
        }
        else
        {
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            if(c=='+'){
                st.push(x + y);
            }
            else if (c == '-')
            {
                st.push(x - y);
            }
            else if (c == '*')
            {
                st.push(x * y);
            }
            else if (c == '/')
            {
                st.push(x / y);
            }
        }
    }
    return st.top();
}

int main()
{
    string exp = "138*+";

    cout << evalPostfix(exp);

    return 0;
}