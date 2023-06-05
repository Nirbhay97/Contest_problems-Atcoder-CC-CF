#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int l = 1, h = 1e18;
    int ans = 0;
    if(n < k){
        cout << 0 << endl;
        return;
    }
    while(l <= h){
        int m = l + (h - l)/2;
        int tot = 0;
        int temp = 0;
        for(auto it : arr) {
            if(it >= m) temp++;
            else tot += it;
        }
       
        tot = temp + tot/m;
        if(tot >= k){
            ans = m;
            l = m + 1;
        }else h = m - 1;
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