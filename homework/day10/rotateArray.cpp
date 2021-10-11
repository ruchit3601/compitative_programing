#include <iostream>
using namespace std;

void reverse(int arr[], int n, int start, int end)
{
    while (start < end)
    {
        int temp = 0;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// void shiftByOne(int arr[], int n)
// {
//     int temp = arr[0];
//     for (int i = 1; i < n;i++){
//         arr[i - 1] = arr[i];
//     }
//     arr[n - 1] = temp;
// }

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 3;
    printarr(arr, n);

    cout << "\n";
    // for (int i = 0; i < k;i++){
    //     shiftByOne(arr, n);
    // }
    reverse(arr, n, 0, k - 1);
    reverse(arr, n, k, n - 1);
    reverse(arr, n, 0, n - 1);

    printarr(arr, n);

    return 0;
}