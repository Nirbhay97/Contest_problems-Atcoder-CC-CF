#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int x, y;
    cin >> x >> y;
    if(abs(x) == abs(y)) cout << 2*abs(x) << endl;
    else cout << 2*(max(abs(x), abs(y))) - 1 << endl;
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