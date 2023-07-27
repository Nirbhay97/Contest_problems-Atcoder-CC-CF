#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n; cin >> n; int arr[n]; for(int i = 0; i < n; i++) cin >> arr[i];
    // for(int i = 0; i < n; i++) cout << arr[i] << " ";
    int mn = 1e9 + 7;
    for(int i = 0; i < n - 1; i++){
        if(arr[i + 1] - arr[i] < 0){
            cout << 0 << endl;
            return;
        }
        mn = min(arr[i + 1] - arr[i], mn);
    }
    // cout << mn
    if(mn == 0 or mn == 1) cout << 1 << endl;
    else if(mn == 2) cout << mn  << endl;
    else cout << mn/2 + 1 << endl;
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