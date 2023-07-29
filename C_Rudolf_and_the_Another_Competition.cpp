#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, m, h;
    cin >> n >> m >> h;
    vector<vector<int>>ans;

    for(int i = 0; i < n; i++){
        vector<int>nums(m);
        int cnt = 0;
        int pen = 0;
        int tim = 0;
        for(int j = 0; j < m; j++){
            cin >> nums[j];
        }
        sort(nums.begin(), nums.end());
        for(auto it : nums){
            if(tim + it <= h){
                tim += it;
                pen += tim;
                cnt++;
            } else break;
        }
        ans.push_back({cnt, pen, i});
    }

    auto cmp = [&](vector<int>a, vector<int>b){
        if(a[0] != b[0]) return a[0] > b[0];
        else{
            if(a[1] != b[1]) return a[1] < b[1];
            return a[2] < b[2];
        }
    };
    sort(ans.begin(), ans.end(), cmp);
    int res = 0;

    for(auto it : ans){
        res++;
        if(it[2] == 0){
            cout << res << endl;
            return;
        }
    }
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}