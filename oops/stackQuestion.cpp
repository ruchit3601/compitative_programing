#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {5, 3, 8, 1, 6, 4, 2};
    int n = 7;
    stack<int> st;
    int ngr[n];
    for (int i = 0; i <n; i++)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
        {
            st.pop();
        }
        ngr[i] = (st.empty() ? -1 : st.top());
        st.push(i);
        cout << ngr[i] << " ";
    }

    return 0;
}