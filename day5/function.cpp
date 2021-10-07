#include <iostream>
using namespace std;

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int divide(int a, int b);

int main()
{

    int x = 10, y = 20;
    char c;
    cout << "enter operator";
    cin >> c;
    if (c == '+')
    {
        int result = add(x, y);
        cout << result;
    }
    if (c == '-')
    {
        int result = sub(x, y);
        cout << result;
    }
    if (c == '*')
    {
        int result = mul(x, y);
        cout << result;
    }
    if (c == '/')
    {
        int result = divide(x, y);
        cout << result;
    }
    return 0;
}

int add(int a, int b)
{
    int res = a + b;
    return res;
}
int sub(int a, int b)
{
    int res = a - b;
    return res;
}
int mul(int a, int b)
{
    int res = a * b;
    return res;
}
int divide(int a, int b)
{
    int res = a / b;
    return res;
}
