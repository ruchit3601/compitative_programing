#include <iostream>
using namespace std;

void rearrange(int arr[], int n)
{
    int temp[n];
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            temp[j] = arr[i];
            j++;
        }
    }
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
        arr[i] = temp[i];
    }
}

int main()
{

    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int n = 8;

    rearrange(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}