#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;

    int ans = INT_MAX;
    int f = INT_MAX, se = INT_MAX;

    for(int i = 0;  i < n; i++){
        int m;
        cin >> m;
        string s;
        cin >> s;
       
        if(s[0] == '1' and s[1] == '1'){
            ans = min(ans, m);
            continue;
        }

        if(s[0] == '1' and s[1] == '0'){
            f = min(f, m);
        }
        else if(s[0] == '0' and s[1] == '1'){
            se = min(se, m);
        }

    }

    ans = min(ans, f + se);
    if(ans >= INT_MAX) cout << -1 << endl;
    else cout << ans << endl;
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