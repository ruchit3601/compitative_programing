#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    static const int legs = 2;
    static int hands;
    static int ears;

    string name;
    int marks;
    void hii()
    {
        cout << " hii" << "\n";
    }

    static void hello()
    {
        cout << " hello" << "\n";
    }
};
int Human::hands = 2;
int Human::ears = 3;

int main()
{
    Human h1, h2;
    // h1.ears = 3; error

    cout << h1.legs << " " << h1.hands << " " << h1.ears << "\n";
    cout << h2.legs << " " << h2.hands << " " << h2.ears;
    h1.hii();
    // Human::hii(); error
    Human::hello();

    h1.hello();

    return 0;
}
// static can be accessed and initilized by classs name
