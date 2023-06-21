#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){

    unsigned long long ans = 0;
    for(unsigned long long i = 0; i < 64; i++){
        unsigned long long t;
        cin >> t;
        ans += t << i;
        // cout << ans << endl;
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
/* Hey you should check this out
* int overflow, array bounds
* reset global array and variable
* look for special cases (n=1?)
* do something instead of nothing and stay organized
* bruteforce to find pattern
* DON'T GET STUCK ON ONE APPROACH*/