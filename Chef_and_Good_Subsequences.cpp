#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar
int mod = 1e9 + 7;
vector<int> v;
map<int,int> mp;

int dp[8001][8001];


int f(int idx, int k){

    if( k == 0 || idx == -1) return 1;

    if(dp[idx][k] != -1) return dp[idx][k];

    int pick = f(idx-1 , k-1);

    int notpick = f(idx-1 , k);

    return dp[idx][k] = ((mp[v[idx]] * pick ) % mod + notpick % mod ) % mod ;
}


void solve(){
    int n,k,num;
    cin>>n>>k;
    memset(dp ,-1 , sizeof(dp));
    for(int i=0;i<n;i++) {
        cin>>num;
        mp[num]++;
        if( mp[num] == 1 ) v.push_back(num);
    }
    cout << f(v.size()-1 , k);
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while(t--) solve();
    return 0;
}