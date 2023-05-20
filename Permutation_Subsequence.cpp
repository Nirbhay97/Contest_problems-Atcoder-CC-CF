#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

int m = 1e9 + 7;

void solve(){
    int n;
    cin >> n;
    int ans = 0;
    map<int,int>mp;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        mp[t]++;
    }
    int prev = 1;
    for(int i = 1; i <= n; i++){
        int cnt = mp[i];
        if(cnt == 0){
            cout << ans << endl;
            return;
        }
        else{
            prev = prev*cnt % m;
            ans = (ans + prev) % m;
        }
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