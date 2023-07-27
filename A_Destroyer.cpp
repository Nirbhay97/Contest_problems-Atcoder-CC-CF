#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr+ n);
    int cntr = 0;
    int pre = 1000;
    for(int i = 0; i < n; i++) {

        if(arr[i] != cntr){
            cout << "NO" << endl;
            return;
        }
        int cnt = 0;
        while(i < n and arr[i] == cntr){
            i++;
            cnt++;
        }
        
        i--;
        if(pre < cnt){
            cout << "NO" << endl;
            return;
        }
        pre = cnt;
        cntr++;
    }

    cout << "YES" << endl;
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