#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, k;
    cin >> n >> k;
    vector<int>nums(n + 1,0);
    int var = 1;
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        int t;
        cin >> t;
        if(t != var)cnt++;
        else var++;  
        nums[i] = t;
    }

    if(cnt == 0)cout << 0;
    else if(cnt <= k) cout << 1;
    else{
        cout << (cnt + k - 1)/k;
    }
    cout << endl;
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