#include <bits/stdc++.h>
#define int long long 
using namespace std;


void solve(){

    int n, x;
    cin >> n >> x;
    vector<int>nums;
    for(int i = 0; i< n; i++){
        int tt;
        cin >> tt;
        nums.push_back(tt);
    }
    
    sort(nums.begin(), nums.end());
    reverse(nums.begin(), nums.end());
    int cnt = 0;

    for(int i = 0; i < n; i++){
        cnt++;
        if(cnt == x){
            cout << --nums[i] << endl;
            break;
        }
    }

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