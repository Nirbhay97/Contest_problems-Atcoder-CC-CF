#include <algorithm>
#include <map>
#include <iostream>
#include <set>
#include <array> 
#include <deque>
#include <forward_list>
#include <list>
#include <iterator>
#include <vector>
#include <queue>
#include <climits>
#include <stack>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>
#include <tuple>
#define int long long 
using namespace std;
//Nirbhay kumar
int dx[4] = {-1,1,0,0};
int dy[4] = {0,0,1,-1};

int sdx[8] = {0,-1,-1,-1,0,1,1,1};
int sdy[8] = {1,1,0,-1,-1,-1,0,1};

bool isSafe(int i, int j, int n, int m, vector<vector<int>> vis){
     if(i >= n or i < 0 or j >= m or j < 0 or vis[i][j] == 1)
        return false;
    return true;
}

void dfs(int i, int j, int n, int m, vector<vector<int>>&dp, vector<vector<int>>& vis, int &ans, int dist){

    if(i == n - 1 and j == m - 1){
        ans = min(ans, dist);
        return;
    }
   
    vis[i][j] = 1;

    if(dp[i][j] == 1){

        for(int k = 0; k < 8; k++){
            if(isSafe(i + sdx[k], j + sdy[k], n, m, vis))dfs(i + sdx[k], j + sdy[k], n, m, dp, vis, ans, dist + 1);
        }
    }
    if(dp[i][j] == 0){

        for(int k = 0; k < 4; k++){
           if(isSafe(i + dx[k], j + dy[k], n, m, vis))dfs(i + dx[k], j + dy[k], n, m, dp, vis, ans, dist + 1);
        }
    }
    
    vis[i][j] = 0;

}
void solve(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<vector<int>>dp(n, vector<int>(m, 0));
    vector<vector<int>>vis(n, vector<int>(m, 0));

    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        dp[x - 1][y - 1] = 1;
    }
    int ans = 0;
    int dist = INT_MAX;

    dfs(0,0,n,m,dp,vis,ans,dist);

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