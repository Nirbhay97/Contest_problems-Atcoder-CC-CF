#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int arr[n + 1];
    int called[n + 1];
    fill(called, called + n + 1, 0);
    for(int i = 1; i <= n; i++) cin >> arr[i];

    for(int i = 1; i <=n ; i++){
        
        if(called[i] == 0){
            called[arr[i]] = 1;
        }
    }

    vector<int>ans;
    for(int i = 1; i  <= n; i++){
        if(called[i] == 0)ans.push_back(i);
    }

    cout << ans.size() << endl;
    for(auto it : ans) cout << it << " ";
    cout << endl;
   
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