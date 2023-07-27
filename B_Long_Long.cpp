#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    vector<int>arr(n);
    int ans = 0;
    for(int i = 0; i < n; i++){ 
        cin >> arr[i];
        ans += abs(arr[i]);
    }

    int cnt = 0;
    int i = 0;
    while(i < n){
        if(arr[i] < 0){
            while(i < n and (arr[i] < 0 or arr[i] == 0)) i++;
            cnt++;
        } else i++;
    }

    cout << ans << " " << cnt << endl;
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
/* Hey you should check this out
* int overflow, array bounds
* reset global array and variable
* look for special cases (n=1?)
* do something instead of nothing and stay organized
* bruteforce to find pattern
* DON'T GET STUCK ON ONE APPROACH*/