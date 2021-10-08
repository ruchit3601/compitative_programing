#include <iostream>
using namespace std;

string convert(string s)
{
    int n = s.length();
    string result;
    for (int i = 0; i <= n; i++)
    {
        if (s[i] > s[i + 1])
        {
            result.push_back(s[i]);
        }
        else if (s[i] < s[i + 1])
        {
            result.push_back(s[i + 1]);
        }
        i++;
    }
    return result;
}

int main()
{

    string s = "ruchit";
    cout << s << "\n";
    cout << convert(s);
    cout << "\n";
    return 0;
}