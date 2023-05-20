#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

vector<int> parent;
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
    int n, k, p;
    cin >> n >> k >> p;
    parent.resize(n + 1);
    for(int i = 1; i <= n; i++) parent[i] = i;
    vector<pair<int,int>>arr;
    for(int i = 1; i <= n; i++){
        int t;
        cin >> t;
        arr.push_back({t, i});
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n - 1; i++){
        if((arr[i+1].first - arr[i].first) <= k){
            Union(arr[i].second,arr[i + 1].second);
        }
    }

    for(int i = 0; i < p; i++){
        int a , b;
        cin >> a >> b;
        int x = findparent(a);
        int y = findparent(b);
        if(x == y) cout << "Yes" << endl;
        else cout << "No" << endl;
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