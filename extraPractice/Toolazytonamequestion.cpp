#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<pair<int, int>> points_st;
    vector<pair<int, int>> points(n);

    for (int i = 0; i < n;i++){
        cin >> points[i].first >> points[i].second;
        points_st.insert(points[i]);
    }

    int ar_min = INT_MAX, ar_max = INT_MIN;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n;j++){
            auto p1 = points[i];
            auto p2 = points[j];
            if(p1.first==p2.first)
                continue;
            if(p1.second==p2.second)
                continue;
            if(p1.first>p2.first)
                swap(p1, p2);
            int x1 = p1.first, y1 = p2.second;
            int x2 = p2.first, y2 = p1.second;
            if(points_st.count({x1,y1}) && points_st.count({x2,y2})){
                int ar = abs(p1.first - p2.first) * abs(p1.second - p2.second);
                ar_max = max(ar_max, ar);
                ar_min = min(ar_min, ar);
            }
        }
    }
    if(ar_min==INT_MAX){
        cout << -1 << endl;
    }else{
        cout << ar_max - ar_min << endl;
    }

        return 0;
}