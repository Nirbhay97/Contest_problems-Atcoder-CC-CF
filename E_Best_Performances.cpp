#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, k, q;
    cin >> n >> k >> q;
    vector<int>arr(n, 0);
    map<int,int>mp;

    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>pqUsed;
    priority_queue<pair<int,int>, vector<pair<int,int>>>pqUnused;
    
    int ans = 0;
    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
        --a;

        if(mp[a]){
            if(arr[a] < b){
                ans += b - arr[a];
                arr[a] = b;
                mp[a] = 1;
                pqUsed.push({b, a});
            }else {
                if(pqUnused.size()){
                    int p = pqUnused.top().first;
                    int ind = pqUnused.top().second;
                    ans += b -
                }
            }

        }else{
            arr[a] = b;
            if(k--){
                pqUsed.push({b, a});
                mp[a] = 1;
                ans += b;
                cout << ans << endl;
            } else {
                int t = pqUsed.top().first;
                int ind = pqUsed.top().second;

                if(b > t){
                    ans += b - t;
                    pqUnused.push({t, ind});
                    mp[t] = 0;
                    pqUsed.pop();
                    mp[a] = 1;  
                    pqUsed.push({b, a});
                    cout << ans << endl;
                }else {
                    pqUnused.push({b, a});
                    mp[a] = 0;
                }
            }
        }
        
    }
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

/* Hey you should check this out
* int overflow, array bounds
* reset global array and variable
* look for special cases (n=1?)
* do something instead of nothing and stay organized
* bruteforce to find pattern
* DON'T GET STUCK ON ONE APPROACH*/