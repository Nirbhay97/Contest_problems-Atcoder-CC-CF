#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int curr = arr[0];
    int ans = 1;
    for(int i = 0; i < n; i++){
        curr &= arr[i];
        if(curr == 0){
            if(i == n - 1) break;
            ans++;
            curr = arr[i + 1];
        }
    }

    if(curr != 0) ans--;
    ans = max(ans, 1LL);
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