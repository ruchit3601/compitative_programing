#include <iostream>
using namespace std;

bool areRotations(string str1, string str2)
{
    string n;
    if (str1.length() != str2.length())
    {
        return false;
    }
    for (int i = str1.length() - 1; i >= 0; i--)
    {
        cout << str1[i] << " ";
        n += str1[i];
    }
    cout << "\n";
    if (n == str2)
    {
        return true;
    }

    else
    {
        return false;
    }
}

int main()
{
    string str1 = "ABCD";
    string str2 = "DCBA";
    cout << str1 << " \n";
    cout << str2 << "\n";
    areRotations(str1, str2);
    if (areRotations(str1, str2))
        printf("Strings are rotations of each other");
    else
        printf("Strings are not rotations of each other");
    return 0;
}