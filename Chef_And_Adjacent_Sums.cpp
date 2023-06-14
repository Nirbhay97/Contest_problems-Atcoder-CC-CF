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
    int z = arr[n - 1] + arr[n - 2];

    if(n <= 2){
        cout << "NO" << endl;
        return;
    }
    vector<int>ans;
    ans.push_back(arr[n - 1]);
    int i = 0, j = n - 2;

    while(i < j){
        ans.push_back(arr[i++]);
        ans.push_back(arr[j--]);
    }

    if(n % 2 == 0) ans.push_back(arr[(n - 1)/2]);
    // for(auto it : ans) cout << it << " ";

    for(int i = 0 ;i < n - 1; i++){
        if(ans[i] + ans[i+ 1] >= z){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES"  << endl;
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