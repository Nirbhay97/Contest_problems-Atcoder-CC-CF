#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

vector<int>parent;

int find(int node){
   if(node == parent[node]) return node;
   return parent[node] = find(parent[node]);
}

void Union(int u, int v){
   int x = find(u);
   int y = find(v);
   if(x == y) return;
   parent[x] = y;
}


void solve(){
    int n, d;
    cin >> n >> d;
    vector<vector<int>>arr;
    parent.resize(n, 0);
    for(int i = 0; i < n; i++) {
        parent[i] = i;
    }
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        arr.push_back({x, y});
    }

    for(int i = 0; i < n; i++){
        int x = arr[i][0];
        int y = arr[i][1];
        
        for(int j = 0; j < n; j++){
            
            // if(j != i){
                // cout << "u";
                int x1 = arr[j][0];
                int y1 = arr[j][1];

                int dis = 0;
                int temp1 = abs(x1 - x), temp2 = abs(y1 - y);
                temp1 *= temp1, temp2 *= temp2;
                // dis = sqrt(temp1 + temp2);
                // cout << dis << endl;
                if(dis <= d*d){
                    //cout << "in";
                    // int x = find(i);
                    // int y = find(j);
                    // if(x != y)
                    Union(i, j);
                }
            // }
        }
    }
    cout << "Yes" << endl;
    int papa = find(0);
    for(int i = 1; i < n; i++){
        int p = find(i);
        if(p == papa) cout << "Yes" << endl;
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