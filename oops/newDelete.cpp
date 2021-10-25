#include <bits/stdc++.h>
using namespace std;
int a = 5;

int sum(int a, int b)
{
    return ::a + b;
}
class Human
{
public:
    // Properties;
    int legs;
    int ears;
    int hands;

    // Behaviors
    Human()
    {
        cout << "default constructor evolved\n";
        legs = 2;
        ears = 3;
        hands = 4;
    }
};

int main()
{
    Human h;
    Human *p1 = new Human;
    (*p1).ears = 10;
    cout << (*p1).ears<<" "<<p1->ears<<"\n";
    delete (p1);
    cout << (*p1).ears << " " << p1->ears << "\n";

    int *p = new int;
    cout << p << "\n";
    *p = 10;
    cout << sum(2, 2)<< "\n";
    cout << *p << "\n";
    delete (p);
    cout << *p;

    return 0;
}
// new
// 1. memory will be allocated
// 2. return the addesss where the memory is allocated
// 3.
