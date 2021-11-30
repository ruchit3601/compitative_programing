#include <bits/stdc++.h>
using namespace std;

string decode(string seq)
{
    string result;
    stack<int> st;

    for (int i = 0; i <= seq.length(); i++)
    {
        st.push(i + 1);

        if (i == seq.length() || seq[i] == 'I')
        {
            while (!st.empty())
            {
                result += to_string(st.top());
                st.pop();
            }
        }
    }
    return result;
}

int main()
{
    // input sequence
    string seq = "IIDDIDID";

    cout << "The minimum number is " << decode(seq);

    return 0;
}