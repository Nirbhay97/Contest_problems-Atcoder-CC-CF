#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int l, w;
    cin >> l >> w;
    
    if(l % 2 == 0 or w % 2 == 0) cout << "YES" << endl;
    else cout << "NO" << endl;
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