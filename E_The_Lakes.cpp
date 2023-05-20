#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

void dfs(int &vol, int i, int j, int n, int m, vector<vector<int>> &grid, vector<vector<int>> &vis){
    if(i >= n or i < 0 or j >= m or j < 0 || vis[i][j] == 1 or grid[i][j] == 0 ) 
        return;
    
    vol += grid[i][j];
    vis[i][j] = 1;

    dfs(vol, i, j + 1, n, m, grid, vis);
    dfs(vol, i, j - 1, n, m, grid, vis);
    dfs(vol, i + 1, j, n, m, grid, vis);
    dfs(vol, i - 1, j, n, m, grid, vis);

}

void solve(){
    int n, m;
    cin >> n >> m;

    vector<vector<int>>grid(n, vector<int>(m));

    for(int i = 0; i < n; i++){
        for(int j = 0 ; j < m; j++){
            cin >> grid[i][j];
        }
    }

    
    int ans = 0;
    vector<vector<int>>vis(n, vector<int>(m, 0));

    for(int i = 0; i < n; i++){

        for(int j = 0; j < m; j++){

            if(grid[i][j] > 0){
                int vol = 0;
                dfs(vol, i, j, n, m, grid, vis);
                ans = max(ans, vol);      
            }
        }
    }

    cout << ans << endl;
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