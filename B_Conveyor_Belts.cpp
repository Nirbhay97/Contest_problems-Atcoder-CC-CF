#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
   int n;
   cin >> n;
   int a, b, c, d;
   cin >> a >> b  >> c >> d;
   cout << abs(min({n+1-b, b, a, n+1-a}) - min({n+1-c, c, d, n+1-d})) << endl;
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