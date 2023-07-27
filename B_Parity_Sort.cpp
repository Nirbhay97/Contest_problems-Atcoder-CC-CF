#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    vector<int>nums = arr;
    sort(nums.begin(), nums.end());

    int flag = false;
    for(int i = 0; i < n; i++){
        if(nums[i] % 2 != arr[i] % 2){
            cout << "NO" << endl;
            flag = true;
            break;

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