#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, m, k;
    cin >> n >> m >> k;
    int x, y;
    cin >> x >> y;

    string ans = "YES";
    for(int i = 0; i < k; ++i){
        int a, b;
        cin >> a >> b;
        if((x + y) % 2 == (a + b) % 2){
            // cout << "NO" << endl;
            // return;
            ans = "NO";
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