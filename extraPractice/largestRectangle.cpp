#include <bits/stdc++.h>
using namespace std;

int largestRectangle(vector<int> &heights)
{
    int n = heights.size();
    vector<int> left(n), right(n);
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        if (st.empty())
        {
            left[i] = 0;
            st.push(i);
        }
        else
        {
            while (!st.empty() && heights[st.top()] >= heights[i])
            {
                st.pop();
            }
            left[i] = st.empty() ? 0 : st.top() + 1;
            st.push(i);
        }
    }
    // clear stack;
    while (!st.empty())
        st.pop();

    for (int i = n - 1; i >= 0; i--)
    {
        if (st.empty())
        {
            right[i] = n - 1;
            st.push(i);
        }
        else
        {
            while (!st.empty() && heights[st.top()] >= heights[i])
            {
                st.pop();
            }
            right[i] = st.empty() ? n - 1 : st.top() - 1;
            st.push(i);
        }
    }

    int mx_area = 0;
    for (int i = 0; i < n; i++)
    {
        mx_area = max(mx_area, heights[i] * (right[i] - left[i] + 1));
    }
    return mx_area;
}

int main()
{
    vector<int> heights = {1, 2, 3, 4, 5};
    cout << largestRectangle(heights);
    return 0;
}