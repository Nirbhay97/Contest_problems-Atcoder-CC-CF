#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

int dfs(int i, int j, int n, int m, vector<vector<int>>&grid, set<int>&vis){
    
    if(i == n - 1 and j == m - 1 and vis.find(grid[i][j]) == vis.end()) return 1;
    if(vis.find(grid[i][j]) != vis.end()) return 0;

    int temp = 0;
    vis.insert(grid[i][j]);
    if(i + 1 < n){
        temp += dfs(i + 1, j, n, m, grid, vis);
    }
    if(j + 1 < m){
        temp += dfs(i, j + 1, n, m, grid, vis);
    }

    vis.erase(grid[i][j]);
    return temp;
}

void solve(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>>grid(n,vector<int>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0;  j < m; j++){
            int t;
            cin >> t;
            grid[i][j] = t;
        }
    }
   
    set<int>vis;   
    int ans = dfs(0,0,n,m,grid,vis);
    cout << ans << endl;
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while(t--) solve();
    return 0;
}