#include<bits/stdc++.h>
using namespace std;

class Human
{
public:
    // Properties;
    int legs;
    int ears;
    int hands;

    // Behaviors
   Human(){
       cout << "default constructor evolved\n";
       legs = 2;
       ears = 3;
       hands = 4;
   }
   Human(int legs,int ears,int hands)
   {
       cout << "parameterized constructor evolved\n";
       this->legs = legs;
       this->ears = ears;
       this->hands = hands;
   }
   Human(Human &h){
       cout << "copy constructor evolved\n";
       legs = h.legs;
       ears = h.ears;
       hands = h.hands;
   }
   ~Human(){
       cout << this->legs<< " destructor is called\n";

   }
};

int main(){
    Human h;
    h.legs = 3;
    // cout << h.legs << " " << h.ears << " " << h.hands << "\n";
    Human h1(7,8,9);
    // cout << h1.legs << " " << h1.ears << " " << h1.hands << "\n";
    Human h2(h);
    cout << h2.legs << " " << h2.ears << " " << h2.hands << "\n";

    return 0;
}
// constructor
//  1. has same name as class name
// 2. no return type
// 3. callled automatic when object is created

// this
// it is a pointer that is always pointing to its current object
