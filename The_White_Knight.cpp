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

int dx[4] = {-2,-1,2,1};
int dy[4] = {1,2,1,2};

int dfs(int i, int j, int n, vector<vector<int>>&dp, vector<vector<char>>&arr){
   
   if(i < 0 or i >= n or j < 0 or j >= n) return 0;

   if(dp[i][j] != -1) return dp[i][j];
   int mx = 0;
   if(arr[i][j] == 'P') mx++;
   int l = max(dfs(i - 2, j + 1, n, dp, arr), dfs(i - 1, j + 2, n, dp, arr));
   int r = max(dfs(i + 2, j + 1, n, dp, arr), dfs(i + 1, j + 2, n, dp, arr));
   mx += max(l, r);

   dp[i][j] = mx;

   return mx;
}
void solve(){

    int n;
    cin >> n;
    vector<vector<char>>arr(n, vector<char>(n));
    vector<vector<int>>dp(n, vector<int>(n, - 1));
    int l = 0;
    int m = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char p;
            cin >> p;
            arr[i][j] = p;
            if(p == 'K')l = i, m = j;
        }
    }

    int ans = dfs(l,m,n,dp, arr);
    cout << ans << endl;

}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
return 0;
}