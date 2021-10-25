#include <bits/stdc++.h>
using namespace std;

// void count1()
// {
//     int count = 0;
//     cout << count << " ";
//     count++;
// }
void count1()
{
    static int count = 0;
    cout << count << " ";
    count++;
}

void count()
{
    static int count = 0;
    cout << count << " ";
    count++;
}

int main()
{
    for (int i = 0; i < 5; i++)
        count();
    cout << "\n";
    for (int i = 0; i < 10; i ++)
        count1();
        

    return 0;
}
// static
// 1. static is common for complete program
// 2. it is declared only once and stays till end of scope
// 3. if there is 2 varible of static in 2 function then they are divided by scope;