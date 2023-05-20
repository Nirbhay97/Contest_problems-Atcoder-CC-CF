#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, a, b, k;
    cin >> n >> a >> b >> k;
    int cnt = 0;
    
    for(int i = 1; i <= n; i++){
        if(i % a == 0 and i % b == 0) continue;
        else if(i % a == 0 and i % b != 0) cnt++;
        else if(i % a != 0 and i % b == 0) cnt++;
    }
    
    if(cnt >= k) cout << "Win" << endl;
    else cout << "Lose" << endl;
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