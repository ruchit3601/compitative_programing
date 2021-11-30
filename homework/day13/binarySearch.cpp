#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int l, int n,int x)
{
    if(n>=l){
        int mid = (l + n) / 2;

        if(x==arr[mid]){
            return mid;
        }
        else if(x>arr[mid]){
           return binarySearch(arr, mid + 1,n, x);
        }
        else{
            return binarySearch(arr, l, mid - 1, x);
        }
    }
    return -1;
}

int main(){
    int arr[] = {23, 54, 6, 24, 3, 46, 32, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int l = 0;
    int x = 24;
    cout<<binarySearch(arr, 0, n - 1, x);

    return 0;
}