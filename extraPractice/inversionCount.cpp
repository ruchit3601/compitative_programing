#include <bits/stdc++.h>
using namespace std;

int merge(int arr[], int temp[], int left, int mid, int right)
{
    int i, j, k;
    int invCount = 0;
    i = left;
    j = mid;
    k = left;

    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];

            invCount = invCount + (mid - i); // tricky if i is greater then i to mid-1 elements are greter then jth element
        }
    }

    while (i <= mid - 1)
    {
        temp[k++] = arr[i++];
    }
    while (j <= right)
    {
        temp[k++] = arr[j++];
    }
    for (i = left; i <= right; i++)
    {
        arr[i] = temp[i];
    }
    return invCount;
}

int mergeSort(int arr[], int temp[], int left, int right)
{
    int mid, invCount = 0;
    if (right > left)
    {
        mid = (right + left) / 2;
        invCount += mergeSort(arr, temp, left, mid);
        invCount += mergeSort(arr, temp, mid + 1, right);
        invCount += merge(arr, temp, left, mid + 1, right);
    }
    return invCount;
}

int main()
{
    int arr[] = {5, 3, 2, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int temp[n];
    cout << mergeSort(arr, temp, 0, n - 1);

    return 0;
}