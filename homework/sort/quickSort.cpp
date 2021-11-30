#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &v,int l,int h){
    int pivot = v[l];
    int less = v[l];
    int more = v[h];
    while(less<more){
        while(less<h && v[less]<=pivot){
            less++;
        }
        while (more >l && v[more] > pivot)
        {
            more--;
        }
        if(less<more){
            int temp = v[less];
            v[less] = v[more];
            v[more] = temp;
        }
    }
    int temp = v[l];
    v[l] = v[more];
    v[more] = temp;
    return more;
}

void quickSort(vector<int> &v, int l,int h){
    if(l>=h){
        return;
    }
    int pivot_index = partition(v, l, h);
    quickSort(v, l, pivot_index - 1);
    quickSort(v, pivot_index + 1, h);
}

int main(){
    vector<int> v = {4, 3, 5, 2, 7, 1, 6};
    quickSort(v, 0, v.size()-1);

    for (int i = 0; i < v.size();i++){
        cout << v[i] << " ";
    }

        return 0;
}