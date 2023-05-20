#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    vector<int>nums;
    for(int i = 0; i< n; i++){
        int t;
        cin >> t;
        nums.push_back(t);
    }
    sort(nums.begin(), nums.end());
    int ans = 0;
    for(int i = 0; i < n; i++){
        int temp = nums[i];
        int pro = (n - i)*temp;
        ans = max(ans, pro);
    }
    cout << ans << endl;
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
   // cin >> t;
    while(t--) solve();
    return 0;
}