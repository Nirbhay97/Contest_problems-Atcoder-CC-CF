#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>>nums;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        nums.push_back({t, 1});
    }

    for(int i = 0; i < m; i++){
        int t;
        cin >> t;
        nums.push_back({t, 2});
    }

    sort(nums.begin(), nums.end());
    vector<int>ans1,ans2;
    for(int i = 0; i < nums.size(); i++){
        auto it = nums[i];
        if(it.second == 1){
            ans1.push_back(i + 1);
        }else ans2.push_back(i + 1);
    }
    for(auto it : ans1) cout << it << " ";
    cout << endl;
    for(auto it : ans2) cout << it << " ";
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