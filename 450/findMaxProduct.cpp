#include <bits/stdc++.h>

using namespace std;
void findMaximumProduct(int arr[],int n){
    // int maxProduct=INT_MIN;
    // int x,y;
    // for(int i=0;i<n-1;i++){
        
    //     for(int j=i+1;j<n;j++){
    //         if(maxProduct<arr[i]*arr[j]){
    //             maxProduct=arr[i]*arr[j];
    //             x=i;
    //             y=j;
    //         }
    //     }
    // }
    // cout<<arr[x]<<" "<<arr[y];
    if(n<2){
        return;
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
        int a=arr[0]*arr[1];
        int b=arr[n-1]*arr[n-2];
        if(a>b){
            cout<<arr[0]<<" "<<arr[1];
        }
        else{
            cout<<arr[n-1]<<" "<<arr[n-2];
        }
    
    
}

int main()
{
    int arr[] = { -10, -3, 5, 6, -20 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    findMaximumProduct(arr, n);
 
    return 0;
}
// 