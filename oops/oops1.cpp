#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    // Properties;
    int legs;
    int ears;
    int hands;

// Behaviors
    int sleep(int hrs)
    {
        cout << "sleeping";
        return hrs;
    }
    void play()
    {
        cout << "playing";
    }
};

int main()
{
    Human ruchit;
    cout << sizeof(ruchit);
    ruchit.ears = 2;
    cout <<" "<< ruchit.ears;
    ruchit.play();
    cout << "\n";
    cout<<ruchit.sleep(10);
    return 0;
}


// why class : class are used to combine behavior and properties and its a methodolody for solving problems.
// object : when a class is defined no memory is allocated but when it is instanciated (object is creted ) then the memory is allocated
// 4 pillars of oops;
// 1.Abstraction 2.Encapsulation 3.inhertance 4.polymorphism
// 1. displaying the essential information and hiding the bg details.
// 2.wrapping up of data member & member functions is called encapsulation  || binding together both data and function tht manupulate them.
// 3.
// 4. same name different form