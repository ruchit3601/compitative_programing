#include <iostream>
using namespace std;

void min(int arr[], int n)
{
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout <<"min is:" <<min<<" ";
    cout << "\n";
}
void max(int arr[], int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
        }
    }
    cout <<"max is:"<< max<<" ";
    cout << "\n";
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
    min(arr, n);
    max(arr, n);

    return 0;
}