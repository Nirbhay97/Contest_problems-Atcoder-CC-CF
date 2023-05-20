#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, m, k, l , r;
    cin >> n >> m >> k >> l >> r;
    int ans = INT_MAX;
    for(int i = 0; i < n; i++){
        int c, p;
        cin >> c >> p;
        int finaltemp;
        int diff;
        if(c >= k){
            diff = c - k;
            if(m >= diff){
                finaltemp = k;
            }else finaltemp = c - m;
            if(finaltemp <= r and finaltemp >= l){
                ans = min(ans, p);
            }
        }else{
            diff = k - c;
            if(m >= diff) finaltemp = k;
            else finaltemp = c + m;
            if(finaltemp <= r and finaltemp >= l){
                ans = min(ans, p);
            }
        }
    }
    if(ans == INT_MAX) cout << -1;
    else cout << ans;
    cout << endl;
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


