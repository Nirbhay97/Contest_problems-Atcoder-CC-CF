#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    int flag = false;
    if(is_sorted(arr, arr + n)){
        cout << "YES" << endl;
        return;
    }
    for(int i = 1; i < n; i++){
        if(arr[i] < arr[i - 1]){
            if((arr[i] + arr[i - 1]) > k){
                cout << "NO" << endl;
                flag = true;
                break;
            }else{
                int t = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = t;
            }
        }
    }

    if(!flag) cout << "YES" << endl;  
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