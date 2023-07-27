#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


int mod = 998244353;

void solve(){
    int n, m;
    cin >> n >> m;

    if(m == 2){
        cout << 2 << endl;
        return;
    }

    if(n <= 2){
        if(n == 1) cout << m << endl;
        if(n == 2) cout << m * (m - 1) % mod << endl;
        return;
    }

    int ans = 1;
    for(int i = 0; i < n - 2; i++){
        ans = ans*(m - 1);
    }

    ans = (ans * m);
    ans = (ans * (m - 2) );

    cout << ans % mod << endl;
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // ci/n >> t;
    while(t--) solve();
    return 0;
