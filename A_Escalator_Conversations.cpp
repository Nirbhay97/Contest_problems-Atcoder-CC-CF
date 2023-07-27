#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


bool valid(int arr[], int i, int h, int k, int m){
    return (abs(arr[i] - h) % k == 0 and abs(arr[i] - h)/k > 0 and abs(arr[i] - h)/k <= m - 1);
}
void solve(){
    int n, m, k, h; cin >> n >> m >> k >> h;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(valid(arr , i, h, k, m)) ans++;
    }

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