#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, c;
    cin >> n >> c;
    vector<pair<int, int>>arr;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        arr.push_back({t,i + 1});
    }

    auto cmp = [&](pair<int,int>a, pair<int,int>b) {
        int fi = a.first + a.second;
        int se = b.first + b.second;

        return fi < se;
    };

    sort(arr.begin(), arr.end(), cmp);
   // for(auto it : arr) cout << it.first << " ";
    int ans = 0;

    for(int i = 0; i < n; i++){
        int tot = arr[i].first + arr[i].second;       
        int rem = c - tot;
        if(rem >= 0){
            c = rem;
            ans++;
        }else break;
    }

    cout << ans;
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