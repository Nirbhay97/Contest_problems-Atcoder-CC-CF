#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, a , b;
    cin >> n >> a >> b;
    int bob = 0, alice = 0;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        if(t % a == 0) bob++;
        else if(t % b == 0) alice++;
    }
    if(bob > alice) cout << "BOB\n";
    else cout << "ALICE\n";
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