#include <bits/stdc++.h>
using namespace std;

void Union(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            cout << arr2[j] << " ";
            j++;
            i++;
        }
    }
}

int main()
{
    int a1[] = {5, 4, 6, 1};
    int a2[] = {1, 4, 7, 9, 8};
    int n, m;
    n = sizeof(a1) / sizeof(a1[0]);
    m = sizeof(a2) / sizeof(a2[0]);
    sort(a1, a1 + n);
    sort(a2, a2 + m);
    Union(a1, a2, n, m);

    return 0;
}