#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    n++;

    int h = (n + 1)/2;
    int add = h*h - 1;
    int he = n/2;

    int ans = add + he*(he + 1);
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