#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, k;
    cin  >> n >> k;
    // stack<int>st;
    vector<int>nums(n);
    for(int i = 0; i < n; i++) cin >> nums[i];

    sort(nums.begin(), nums.end());

    int i = 0, j = 0;
    int ans = 0;
    int r = 0;
    while(j < n){
        r = j;
        while(r + 1 < n and nums[r + 1] - nums[r] <= k) r++;

        ans = max(ans, r - j + 1);
        j = r;
        j++;
    }

    cout << n - ans << endl;
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