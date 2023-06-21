#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    n = n*3;
    vector<int>arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];
    map<int,vector<int>>mp;
    for(int i = 0; i < n; i++){
        mp[arr[i]].push_back(i + 1);
    }

    vector<pair<int,int>>nums;
    for(auto it : mp){
        nums.push_back({it.second[1], it.first});
    }

    sort(nums.begin(), nums.end());
    for(auto it : nums) cout << it.second << " ";
    cout << endl;
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
/* Hey you should check this out
* int overflow, array bounds
* reset global array and variable
* look for special cases (n=1?)
* do something instead of nothing and stay organized
* bruteforce to find pattern
* DON'T GET STUCK ON ONE APPROACH*/