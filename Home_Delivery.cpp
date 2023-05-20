#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

void dfs(int node, int val, vector<int>&vis, vector<int>adj[]){
   
    vis[node] = val;
    for(auto it : adj[node]){
        if(vis[it] == 0) dfs(it, val, vis, adj);
    }
}

void solve(){
    int n, m;
    cin >> n >> m;
    vector<int>adj[n];
    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int>vis(n,0);
    int val = 1;
    for(int i = 0; i < n; i++){
        if(vis[i] == 0){
            dfs(i,val,vis,adj);
            val++;
        }
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        int a, b;
        cin >> a >> b;
    
        if(vis[a] == vis[b]) cout << "YO";
        else cout << "NO";
        cout << endl;
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