#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    vector<pair<int,string>>arr;
    int ans = INT_MAX;
    for(int i = 0;i < n; i++){
        string s;
        int a;
        cin >> s >> a;
        arr.push_back({a,s});
        ans = min(ans, a);
    }

    int ind = -1;
    for(int i = 0; i < n; i++){
        if(arr[i].first == ans){
            ind = i;
            while(i < n){
                cout << arr[i].second << endl;
                i++;
                // vis[i] = 1;
            }
            break;
        }
    }

    for(int i = 0; i < ind; i++) cout << arr[i].second << endl;
        
    
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}