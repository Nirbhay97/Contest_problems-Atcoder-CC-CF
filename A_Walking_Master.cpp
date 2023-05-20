#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int cnt = 0;
    while(true){
        if((n % 10) == 0) n /= 10, cnt++;
        else break;
    }
    if(ceil(log2(n) == floor(log2(n)))){
         int t = ceil(log2(n));
         if(t > cnt) cout << "NO" << endl;
         else cout << "YES" << endl;
    }
    else cout << "NO" << endl;
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