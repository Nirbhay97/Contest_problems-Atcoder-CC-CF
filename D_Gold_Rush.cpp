#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

bool ans = false;
int n, m;

void dfs(int n){

    if(n == m ){
        ans = true;
        return;
    }

    if(n == 0) return;

    if(n % 3 == 0){
        dfs(n/3);
        dfs(2*n/3);
    }
    
}

void solve(){
    cin >> n >> m;

    dfs(n);

    if(ans) cout << "YES" << endl;
    else cout << "NO" << endl;
    ans = false;
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