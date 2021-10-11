#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(&arr[i], &arr[j]);
            }
        }
    }
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {23, 55, 4, 1, 64, 6, 7};
    int n = 7;
    printarr(arr, n);
    cout << "\n";
    sort(arr, n);
    printarr(arr, n);
    cout << "\n";
    int k;
    cout << "enter the smallest elemnt u want to found:-";
    cin >> k;
    cout << arr[k];

    return 0;
}