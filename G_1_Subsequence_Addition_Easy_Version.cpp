#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n);
    int nums[n];
    for(int i = 0;i < n; i++) nums[i] = arr[i];
    for(int i = 1; i < n; i++){
        arr[i] += arr[i - 1];
    }
    
    if(arr[0] != 1){
        cout << "NO" << endl;
        return;
    }

    // for(int i = 0; i < n; i++) cout << arr[i] << " ";
    // cout << endl;
    
    for(int i = 0; i < n - 1; i++){
        if(nums[i + 1] > arr[i]){
            cout << "NO" << endl;
            return;
        }
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