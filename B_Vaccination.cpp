#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){

    int n, k , d, w;
    cin >> n >> k >> d >> w;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int ans = 0;
    for(int i = 0; i < n; i++){
        int now = arr[i];
        int far = now + w + d;
        int curr = 0;
        ans++;
        while(i < n and curr < k){
            if(arr[i] <= far){
                i++;
                curr++;
            }else break;
        }
        i--;
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