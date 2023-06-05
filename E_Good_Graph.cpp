#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar
int const N = 2e5 + 1;
int parent[N];

map<pair<int,int>, int>mp;

// vector<int> parent;
int findparent(int node){
   if(node == parent[node]) return node;
   return parent[node] = findparent(parent[node]);
}

void Union(int u, int v){
   int x = findparent(u);
   int y = findparent(v);
   if(x == y) return;
   parent[x] = y;
}


void solve(){
    int n, m; cin >> n >> m;
    // parent.resize(n + 1);
    for(int i = 1; i <= n; i++){
        parent[i] = i;
    }

    for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        Union(a, b);
    }

    int k;
    cin >> k;
    while(k--){
        int a , b;
        cin >> a >> b;
        int x = findparent(a);
        int y = findparent(b);
        mp[{x,y}] = 1;
        mp[{y,x}] = 1;
    }

    int q;
    cin >> q;
    while(q--){
        int a, b;
        cin >> a >> b;
        int x = findparent(a);
        int y = findparent(b);
        if(mp[{x, y}] or mp[{y, x}]) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) solve();
    return 0;
}
