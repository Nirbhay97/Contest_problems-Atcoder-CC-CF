#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int l = 0, h = 1e9;
    int ans = 0;
    while (l <= h){

        int mid = (l + h)/2;
        int funval = (mid + 1)*(mid + 1);
        if(funval >= n){
            ans = mid;
            // cout << "(" << mid << ")"<< endl;
            h = mid - 1;
        }else l = mid + 1;
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