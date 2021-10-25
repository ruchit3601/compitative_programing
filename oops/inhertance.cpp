#include <bits/stdc++.h>
using namespace std;

class A
{
    public:
        int a;

    protected:
        int b;

    private:
        int c;
};
class B: public A
{
    public:
        int x;
        void sety(int x1){
            y=x1;
        }
        int gety(){
            return y;
        }

    protected:
        int y;

    private:
        int z;
};
class C : public B{
    
    public:
        int p;

    protected:
        int q;

    private:
        int r;
};
    class D : protected B
    {

        public:
            int s;

        protected:
            int d;

        private:
            int f;
    };

int main()
{
    B b1;
    b1.a = 10;
    b1.x = 20;
    cout << b1.a<<" " <<b1.x<<"\n";
    C c1;
    c1.sety(21);
    cout << c1.gety();
    D d1;
    C *p = new C;
    cout << p->gety();
    // d1.x=10 bcoz it is inherted in protected in D even if it is declared in public of B
    return 0;
}

// public and protected both are inherted if its public then both comes in public if protected it comes in protected

// inhertance
// 5 types
// 1. single leve A->B
// 2. multilevel A->B->C->D...
// 3. multiple A,B->C , C is inherting 2 class A&B
// 4. hirarical A->B, A->C , A is inherted by to class B,C
// 5. hibrid having to forms either A->B , B->C,B->D single and hirarical or any 2 form