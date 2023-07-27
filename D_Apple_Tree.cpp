#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

vector<int>dp;

void dfs(int node, int parent, vector<int>adj[]){
    
    if(adj[node].size() == 1 and adj[node][0] == parent) {
        dp[node] = 1;
    }
    else {
        for(auto it : adj[node]){
            if(it != parent){
                dfs(it, node, adj);
                dp[node] += dp[it];
            }
        }
    }
}

void solve(){
    int n;
    cin >> n;
    
    dp.assign(n,0);

    vector<int>adj[n];
    
    for(int i = 0; i < n - 1; i++){
        int a, b;
        cin >> a >> b;     
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(0, -1, adj);
    
    int q;
    cin >> q;
    while(q--){
        int x, y;
        cin >> x >> y;
        --x, --y;
        cout << dp[x]*dp[y] << endl;
    }
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    // cout <<t;
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