#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, k;
    cin >> n >> k;
    if(n < 2*k){ cout << "NO" << endl; return;}
    else{
        int odd = (n + 1)/2;
        if((odd - k)&1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
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