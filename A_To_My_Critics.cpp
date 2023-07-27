#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int a, b, c;
    int arr[3];
    for(int i = 0; i < 3; i++) cin >> arr[i];
    sort(arr, arr + 3);

    if(arr[1] + arr[2] >= 10) cout << "YES" << endl;
    else cout << "NO" << endl;
    
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