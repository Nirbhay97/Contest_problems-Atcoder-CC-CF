#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    string s;
    cin >> s;
    string a = s;
    reverse(s.begin(), s.end());
    if(s == a) cout << "YES" << endl;
    else cout << "NO" << endl;
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