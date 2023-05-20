#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int f = 1, l = n;
    for(int i = 0; i < n/2; i++){
        cout << f++ << " " << l-- << " ";
    }

    if(n&1) cout << (n + 1)/2;
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