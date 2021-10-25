#include<bits/stdc++.h>
using namespace std;

class A{
    public:
        void hii(){
            cout << "hii from class A\n";
        }
};

class B: public A
{
    void hii()
    {
        cout << "hii from class B\n";
    }
};
class C
{
public:
    virtual void hii()
    {
        cout << "hii from class c\n";
    }
};
class D: public C
{
public:
    void hii()
    {
        cout << "hii from class D\n";
    }
};

int main(){
    A *p = new B;
    p->hii();  // called from class A bcoz it is pointer of class
    C *p1 = new D;
    p1->hii(); // called from class D boz it is virtual in class c; //virtual function, binded at runtime (Runtime polymorphism)

    return 0;
}

//  by default access specifier is private
// virtual function, binded at runtime (Runtime polymorphism)
