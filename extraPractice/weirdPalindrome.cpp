/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int e=0,o=0;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                e++;
            }
            else{
                o++;
            }
        }
        if(o>0){
            cout<<o/2<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }

    return 0;
}
