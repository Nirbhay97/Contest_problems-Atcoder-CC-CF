#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, k; 
    cin >> n >> k;
    vector<int>nums(52, 0);
    for(int i = 0; i < n; i++){
        int l,r;
        cin >> l >> r;
        if(k >= l and k <= r){
            nums[l]++;
            nums[r + 1]--;
        }        
    }
  
    for(int i = 1; i < 52; i++) nums[i] = nums[i] + nums[i - 1];
    int mx = nums[k];
   // cout << mx << endl;
    if(mx == 0){
        cout << "no" << endl;
        return;} 
    for(int i = 1; i < 51; i++){       
        if(nums[i] >= mx and i != k){
            cout << "no" << endl;
            return;
        }
    }
    cout << "yes" << endl;
    
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