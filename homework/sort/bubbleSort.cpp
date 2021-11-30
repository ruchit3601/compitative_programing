#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        for (int k = 0; k < n;k++){
            cout << arr[k] << " ";
        }
        cout << endl;
    }

}

int print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {53, 63, 63, 245, 6, 24, 5,356, 32, 45, 1,7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    print(arr, n);

    return 0;
}