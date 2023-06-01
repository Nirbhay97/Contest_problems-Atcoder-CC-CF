#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, k, l;
    cin >> n >> k >> l;

    int ans = 0;
    vector<pair<int,int>>arr;
    map<int,int>mp;
    for(int i = 0; i < n; i++){
        int m, l1;
        cin >> m >> l1;
        if(l1 == l) arr.push_back({m, l1});
    }

    if(arr.size() < k){
        cout << -1 << endl;
        return;
    }
    sort(arr.begin(), arr.end());
    reverse(arr.begin(), arr.end());
    for(int i = 0; i < k; i++){
        ans += arr[i].first;
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