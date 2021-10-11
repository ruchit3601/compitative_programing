#include <iostream>
using namespace std;

void PositiveAtEnd(int arr[], int n)
{
    int temp[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        cout << temp[j] << " ";
    }
    cout << "\n";
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << " \n";
}

int main()
{
    int arr[] = {-2, 4, 9, -9, -3, 6, 7};
    int n = 7;
    printarr(arr, n);
    PositiveAtEnd(arr, n);
}