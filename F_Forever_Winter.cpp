#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

int x = -1, y = -1;

void dfs(int i,int dis, vector<bool>&vis, vector<int>&indegree, vector<int>adj[]){
	if ( vis[i] )
        return;

    vis[i] = 1;
	if ( dis == 1 && indegree[i] != 1 ) y = indegree[i];
    if ( dis == 2 && indegree[i] != 1) x = indegree[i];
	
	for(auto it : adj[i])
		if (!vis[it])
            dfs(it, dis+1, vis, indegree, adj);	
	
}
 
void solve () {
	int n, m;
	cin >> n >> m;
	vector<int> adj[n + 10];
    vector<bool>vis(n + 10, 0);
    vector<int>indegree(n + 10, 0);

	x = -1, y = -1;
 
	for (int i = 0 ; i < m ; i++) {
		int u, v;
		cin >> u >> v;
		u--, v--;
		adj[u].push_back(v), adj[v].push_back(u);
		indegree[u]++, indegree[v]++;
	}
 
	for(int i = 0 ; i < n ; i ++){
		if ( indegree[i] == 1 ){
			dfs(i,0, vis, indegree, adj);
			break;
		}
	}
 
	cout << x << " " << y - 1 << endl;
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