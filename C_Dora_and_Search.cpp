#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    vector<int>a;
    for(int i = 0; i < n; i++){
        int t; cin >> t; a.push_back(t);
    }

    if(n < 4) cout << -1;
    else{
        int l = 0, r = n - 1;
        int mn = 1, mx = n;
        while (l <= r) {
            if (a[l] == mn) {
                l++;
                mn++;
            } else if (a[l] == mx) {
                l++;
                mx--;
            } else if (a[r] == mn) {
                r--;
                mn++;
            } else if (a[r] == mx) {
                r--;
                mx--;
            } else {
                break;
            }
        }
        if(l <= r){
            cout << l + 1 << " " << r + 1 << endl;
        } else{
            cout << -1 << endl;
        }
        }
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