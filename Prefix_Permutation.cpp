#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int arr[n + 1];
    for(int i = 1; i <= n; i++) arr[i] = i;
    if(n & 1) cout << -1 << endl;
    else{
        for(int i = 1; i <= n - 1; i += 2){
            int t = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = t;
        }
        
        for(int i = 1; i <= n; i++)cout << arr[i] << " ";
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