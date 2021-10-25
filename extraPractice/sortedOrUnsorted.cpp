#include<bits/stdc++.h>
using namespace std;

bool sortedOrUnsorted(vector<int> arr, int index)
{
    if(index>=arr.size()){
        return true;
    }
    if(arr[index]<arr[index-1]){
        return false;
    }
    return sortedOrUnsorted(arr, index + 1);
}

  int  main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool ans= sortedOrUnsorted(arr,1);

    if(ans==1){
        cout << "sorted";
    }
    else{
        cout<<"unsorted";

    }
    

    return 0;
}