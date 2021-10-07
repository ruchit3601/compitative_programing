#include <iostream>
using namespace std;

string convert(string s)
{
    int n = s.length();
    for (int i = 0; i <= n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 'a' + 'A';
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] - 'A' + 'a';
        }
    }
    return s;
}

int main()
{
    char c[] = {'a', 'b', 'c'};
    cout << c;
    cout << "\n";
    cout << c[1];
    char p = 'b';
    char *x = &p;
    cout << " " << x;

    string s = "rUChItChudASAmA123@#";
    cout << "\n"
         << s;
    cout << convert(s) << " ";
    cout << "\n";
    s.append("hello");
    cout << s << " ";

    return 0;
}