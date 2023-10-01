#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


map<int,int>mp;

void solve(){
    string s = "3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int n;
    cin >> n;
    string ans = "3.";
    for(int i = 0; i < n; i++){
        ans += s[2 + i];
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