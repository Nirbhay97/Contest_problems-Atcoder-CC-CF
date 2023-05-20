#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){

    int n;
    cin >> n;
    vector<int>nums;
    for(int i = 1; i <= n; i++) nums.push_back(i);
    
    int ans = 1;
    for(int i = 0; i < 31; i++){
        int len = 0;
        for(int j = 0; j < n; j++){
            if(nums[j] & (1 << i)){
                len++;
                ans = max(ans, len);
            }else len = 0;       
        }
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