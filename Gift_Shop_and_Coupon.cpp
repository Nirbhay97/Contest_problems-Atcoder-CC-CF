#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n , k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i< n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int ans = 0;
    for(int i = 0; i < n; i++){

        if(k >= arr[i]){
            ans++;
            k -= arr[i];
        }else{
            int cost = (arr[i] + 1)/2;
            if(k >= cost){
                ans++;
                break;
            }
        }
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