#include <iostream>
using namespace std;

void rearrange(int arr[], int n)
{
    int count0 = 0, count1 = 0, count2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count0++;
        }
        if (arr[i] == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    int j = 0;
    for (int i = 0; i < count0; i++)
    {
        arr[j] = 0;
        j++;
    }
    for (int i = 0; i < count1; i++)
    {
        arr[j] = 1;
        j++;
    }
    for (int i = 0; i < count2; i++)
    {
        arr[j] = 2;
        j++;
    }
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
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

    int arr[] = {0, 2, 2, 1, 0, 1, 2};
    int n = 7;
    printarr(arr, n);
    cout << "\n";
    rearrange(arr, n);
    return 0;
}