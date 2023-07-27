#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n; cin >> n;

    while(n--){
        int ans = 0;
        for(int i = 0; i < 7; i++){
            int t;
            cin >> t;
            ans += t;
        }
        cout << ans << " "; 
    }
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