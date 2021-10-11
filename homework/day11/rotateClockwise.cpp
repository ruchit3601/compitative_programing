#include<iostream>
using namespace std;

void shiftByOne(int arr[], int n)
{
    int temp = arr[n-1];
    for (int i = n-1; i >0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    printarr(arr, n);
    shiftByOne(arr, n);
    printarr(arr, n);
}