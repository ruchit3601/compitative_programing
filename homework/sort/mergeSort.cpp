#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int l, int mid, int h)
{
    vector<int> first;
    vector<int> second;
    int k = l;
    for (int i = l; i <=mid;i++){

        first.push_back(v[i]);
    }
    for (int i = mid+1; i <= h; i++)
    {
        second.push_back(v[i]);
    }
    int n = first.size();
    int m = second.size();
    int i = 0, j = 0;
    while(i<n && j<m){
        if(first[i]<second[j]){
            v[k] = first[i];
            i++;
            k++;
        }
        else
        {
            v[k] = second[j];
            j++;
            k++;
        }
    }
    while(i<n){
        v[k] = first[i];
        i++;
        k++;
    }
    while (j < m)
    {
        v[k] = second[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int> &v, int l, int h)
{
    if (l >= h)
    {
        return;
    }
    int mid = (l + h) / 2;
    mergeSort(v, l, mid);
    mergeSort(v, mid + 1, h);
    merge(v, l, mid, h);
}

int main()
{
    vector<int> v = {1, 5, 3, 8, 2, 4};
    mergeSort(v, 0, v.size() - 1);
    for (int k = 0; k < v.size();k++){
        cout << v[k] << " ";
    }
    cout << endl;

    return 0;
}