#include <bits/stdc++.h>
using namespace std;

class Sum
{
public:
    int sum(float a, int b)
    {
        return a + b + 1;
    }
    int sum(int a, int b)
    {
        return a + b + 2;
    }
    
    // int sum(int a,float b){
    //     return a + b;
    // }
};
int main()
{
    Sum s;
    cout << s.sum(12.2f, 13.1f);

    return 0;
}
// overriding:
// 1.no. of parameter should be different
// 2.type of parameter should be different
// 3.order of parameter should be different