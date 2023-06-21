#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, b;
    cin >> n >> b;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int curr = -1;
    for(int i = 0; i < n; i++){
        int num = arr[i];
        if((num & b) == b) curr &= num;
    }
    
    if(curr == b)cout << "YES" << endl;
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
