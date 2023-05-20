#include <bits/stdc++.h>
#define int long long 
using namespace std;
#define ll long long
//Nirbhay kumar

int mod=1000000007;
void dfs(vector<vector<int>> &edge, vector<int> &vis, int u, int &cnt) {
    if(vis[u]==1)
        return;
    vis[u]=1;
    cnt++;
    for(int v:edge[u])  {
        dfs(edge, vis, v, cnt);
    }
}

void solve()	{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> edge(n, vector<int>());
    for(int i=0; i<m; ++i)  {
        int u, v;
        cin >> u >> v;
        u--, v--;
        edge[v].push_back(u);
        edge[u].push_back(v);
    }
    vector<int> vis(n, 0);
    ll ans=0, captain=1;
    for(int i=0; i<n; ++i)  {
        int cnt=0;
        if(!vis[i]) {
            ans++;
            dfs(edge, vis, i, cnt);
            captain=((captain%mod)*(cnt%mod))%mod;
        }
    }
    cout << ans << " " << captain << endl;
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