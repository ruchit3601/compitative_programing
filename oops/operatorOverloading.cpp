#include <bits/stdc++.h>
using namespace std;

template <class T>
class Complex
{
private:
    T a;
    T b;

public:
    Complex(T a, T b)
    {
        this->a = a;
        this->b = b;
    }
    void display()
    {
        cout << a << " +i" << b << endl;
    }
    T real()
    {
        return a;
    }
    T imag()
    {
        return b;
    }

    Complex<T> operator+(Complex<T> x)
    {
        Complex<T> res(this->real() + x.real(), this->imag() + x.imag());
        return res;
    }
    Complex<T> operator-(Complex<T> x)
    {
        Complex<T> res(this->real() - x.real(), this->imag() - x.imag());
        return res;
    }
    Complex<T> operator*(Complex<T> x)
    {
        Complex<T> res(this->real() * x.real() - this->imag() * x.imag(), this->real() * x->imag() + this->imag() x.real());
        return res;
    }
};

int main()
{
    Complex<int> c1(2, 3);
    c1.display();
    Complex<int> c2(4, 5);
    c2.display();
    Complex<int> res = c1 - c2;
    res.display();

    return 0;
}