#include <iostream>
using namespace std;

string convert(string s)
{
    int n = s.length();
    string result;
    for (int i = 0; i <= n; i++)
    {
        if (s[i] == 'a')
        {
            result.append("a");
        }
        else if (s[i] == 'b')
        {
            result.append("bb");
        }
        else if (s[i] == 'c')
        {
            result.append("ccc");
        }
    }
    return result;
}

int main()
{

    string s = "abcba";
    cout << s << "\n";
    cout << convert(s);
    cout << "\n";
    return 0;
}