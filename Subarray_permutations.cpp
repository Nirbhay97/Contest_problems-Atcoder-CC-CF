#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, k;
    cin >> n >> k;
    if(n > 1 and k == 1) cout << -1;
    else if(n == 1 and k == 1) cout << 1;
    else {
      
        for(int i = 1; i <= n; i++){
            if(i != k) cout << i << " ";
        }
        cout << k;
    }
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