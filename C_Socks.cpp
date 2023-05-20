#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    //vector<int>arr(n);
    map<int,int>mp;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        mp[t]++;
    }
    int ans = 0;
    for(auto it : mp){
        int x = it.second;
        ans += x/2;
    }
    cout << ans << endl;
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