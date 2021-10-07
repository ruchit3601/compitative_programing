#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int *p = &a;
    float c = 9.5;
    char e = 'c';
    cout << e << " " << (char)(e - 'a' + 'A');
    cout << endl;
    float *q = &c;
    void *z = &c;
    cout << *p << " " << *(&c) << " "
         << "\n";
    cout << *(float *)z;

    return 0;
}