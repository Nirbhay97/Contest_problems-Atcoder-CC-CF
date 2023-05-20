#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int fac = b*d/__gcd(b,d);
    if((a + 1) % b == (c + 1) % d){
        cout << 1 << endl;
    }else cout << fac - (a % b) << endl;
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