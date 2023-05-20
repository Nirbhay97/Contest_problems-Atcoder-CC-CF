#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int cnt = 0;
    int flag = 0;
    for(int i = 0 ;i <n; i++){
        int t;
        cin >> t;
        if(t == 0)cnt++;
        else if(t >= 2)flag  = 1;
    }

    if(cnt <= (n + 1)/2) cout << 0;
    else if(flag or cnt == n) cout << 1;
    else cout << 2;
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