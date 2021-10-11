#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int n1 = 6;
    cout << "array1=";
    for (int i = 0; i < n1; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout << "\n";
    int arr2[] = {7, 8, 9, 10};
    int n2 = 4;
    cout << "array2=";
    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << "\n";

    int arr3[] = {};
    int n3 = 10;
    cout << "array3=";
    for (int i = 0; i < n1;i++){
        arr3[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr3[i] = arr2[i];
    }
    for (int i = 0; i < n3; i++)
    {
        cout << arr3[i] << " ";
    }

    return 0;
}