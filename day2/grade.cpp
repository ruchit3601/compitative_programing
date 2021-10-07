#include <iostream>
using namespace std;

int main(){

    int marks;
    cout << " enter marks:-"<< "\n";
    cin >> marks;
    if(marks>=90 && marks<=100){
        cout << "A+";
    }
    else if (marks >= 80 && marks <= 89)
    {
        cout << "B+";
    }
    else if (marks >= 70 && marks <= 79)
    {
        cout << "C+";
    }
    else{
        cout << "u r failed";
    }

    return 0;
}