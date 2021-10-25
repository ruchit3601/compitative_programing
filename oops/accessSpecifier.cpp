#include <bits/stdc++.h>
using namespace std;

class Human
{
private:
    int age;
    float weight;
    int pin;
    string password;
    void money()
    {
        cout << "earning";
    }

public:
    int height;
    int setAge(int x)
    {
        age = x;
        return age;
    }
    // int getAge(){
    //     return age;
    // }
    void setPassword(string p)
    {
        password = p;
    }
    void setPin(int y)
    {
        cout << "enter your pass word";
        string s;
        cin >> s;
        

        if (s == password)
        {
            pin = y;
            cout << "pin has been changed";
        }
        else
        {
            cout << "enter correct password";
        }
    }
    int getPin()
    {
        return pin;
    }
    void sleep()
    {
        cout << "sleeping";
    }
};

int main()
{
    Human ruchit;
    cout << abs(1.12);
    // ruchit.height= 155;
    // cout << ruchit.height;
    // ruchit.setAge(12);
    // cout << ruchit.setAge(12);
    ruchit.setPassword("hii");
    ruchit.setPin(1200);
    cout << ruchit.getPin();
    return 0;
}