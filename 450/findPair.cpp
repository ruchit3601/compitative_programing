#include <bits/stdc++.h>

using namespace std;

void findPair(int arr[],int n,int target){
    unordered_map<int, int> m;
    
    for(int i=0;i<n;i++){
        if(m.find(target-arr[i])!=m.end()){
            cout<<arr[m[target-arr[i]]]<<" "<<arr[i];
            cout<<endl;
            return;
        }
        m[arr[i]]=i;
    }
    
    
    cout<<"match not found";
}

int main()
{
    
    int nums[] = { 7, 8, 4, 3, 2, 3 };
    int target = 10;
 
    int n = sizeof(nums)/sizeof(nums[0]);
 
    findPair(nums, n, target);

    return 0;
}
