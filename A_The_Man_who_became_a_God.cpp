#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    vector<int>nums;
    int ans = 0;
    for(int i = 1; i < n; i++){
        nums.push_back(abs(arr[i] - arr[i - 1]));
        ans += nums.back();
    }

    sort(nums.begin(), nums.end());
    for(int i = 0; i < k - 1; i++){
        ans -= nums.back();
        nums.pop_back();
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