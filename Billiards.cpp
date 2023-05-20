#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar
int mod = 1e9 + 9;
int dp[1000001];

int dfs(int sum){
    if(sum == 0){

    }
}
void solve(){
    int n;
    cin >> n;
    cout << dp[n] << endl;
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    fill(dp, dp + 1000001, 0);
    dp[2] = 1, dp[3] = 1;
    dp[1] = 0;
    dp[0] = 0;
    int sum = 1000000;
    dfs(sum);
    while(t--) solve();
    return 0;
}