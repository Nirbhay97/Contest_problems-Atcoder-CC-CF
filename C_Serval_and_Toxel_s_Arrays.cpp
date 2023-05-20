#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>>nums;
    for(int i  =0; i < n;i++){
        int t;
        cin >> t;
        nums.push_back({t, 0});
    }

    unordered_map<int,vector<pair<int,int>>>dp;
    for(int i = 1; i <= m; i++){
        int a, b;
        cin >> a >> b;
        a--;
        dp[nums[a].first].push_back({nums[a].second, i});
        nums[a] = {b, i};
    }

    int ans = 0;
    for(int i = 0;i < n; i++) dp[nums[i].first].push_back({nums[i].second, m + 1});

    for(auto it : dp){
        int number = it.first;
        auto val = it.second;
        int ter = 0;
        for(auto & d: val) ter += (d.second - d.first);
        int abset = m + 1 - ter;
        ans += ter*abset + ter*(ter - 1)/2;
    }

    cout << ans << endl;
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