#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, m;
    cin >> n >> m;
    vector<int>sell(n), buy(m);
    for(int i = 0; i < n; i++) cin >> sell[i];
    for(int i = 0; i < m; i++) cin >> buy[i];

    sort(sell.begin(), sell.end());
    sort(buy.begin(), buy.end());

    if(sell[0] > buy[m - 1]){
        cout << buy[m - 1] + 1 << endl;
        return;
    }

    int l = 0, h = 1e9 + 1;

    int ans = 0;
    while(l <= h){
        int val = l + (h - l)/2;
        int buyy = 0, seller = 0;

        for(int i = 0; i < n; i++){
            if(sell[i] > val){
                seller = n - i;
                break;
            }
        }

        for(int i = 0; i < n; i++){
            if(sell[i] <= val) seller++;
        }

        for(int i = 0; i < m; i++){
            if(buy[i] >= val){
                buyy = m - i;
                break;
            }
        }

        if(seller >= buyy){
            ans = val;
            h = val - 1;
        }else l = val + 1;
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