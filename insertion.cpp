#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void insertionSort(int arr[], int n)
{
    int i, j, key;
    for (int j = 0; j < n; j++)
    {
        for (i = j+1; i < n - 1; i++)
        {
            if (arr[j] > arr[i])
            {
                swap(&arr[j], &arr[i]);
            }
        }
        // key = arr[j];
        // i = j - 1;

        // while (i >= 0 && arr[i]>key){
        //     arr[i + 1] = arr[i];
        //     i--;
        // }
        // arr[i + 1] = key;
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "
             << "\n";
    }
}

int main()
{

    int arr[] = {20, 10, 50, 40, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}