#include <iostream>
using namespace std;

string convert(string &s)
{
    int n = s.length();
    string result;
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            result = to_string(s[i] - 96);
            cout << result;
        }
    }
    return result;
}

int main()
{

    string s = "abebc";
    cout << s << "\n";
    convert(s);
    cout << "\n";
    return 0;
}