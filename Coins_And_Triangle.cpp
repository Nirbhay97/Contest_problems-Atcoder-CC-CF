#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int l = 1;
    int h = 10000000;
    int ans = 1;
    while(l <= h){
        int mid = l + (h - l)/2LL;
        int sum = mid*(mid + 1LL)/2LL;
        if(n >= sum){
            l = mid + 1;
            ans = mid;
           
        }else{ 
            h = mid - 1;
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