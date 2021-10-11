#include <iostream>
using namespace std;

void reverse(char arr[], int n)
{
    char start = 0, end = n - 1;
    for (int i = 0; i < n; i++)
    {
        while (start < end)
        {
            char temp = 0;
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}

void printarr(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    char arr[] = {'a', 'b', 'c'};
    int n = 3;
    printarr(arr, n);
    cout << "\n";
    reverse(arr, n);
    printarr(arr, n);

    return 0;
}