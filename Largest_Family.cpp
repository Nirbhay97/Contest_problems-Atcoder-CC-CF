#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){

    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int ans = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum <= n - 1) ans++;
        //cout << i << " "       
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