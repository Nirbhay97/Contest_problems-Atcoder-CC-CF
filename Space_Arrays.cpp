#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n);
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] > (i + 1)){
            ans = 0;
            break;
        }else ans += (i + 1) - arr[i];
    }
    if(ans&1) cout << "First";
    else cout << "Second";
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