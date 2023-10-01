#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};

bool valid(int a, int b, int x1, int y1, int x2, int y2){

    if(a >= x1 and a <= x2 and b <= y1 and b >= y2) return true;
    return false;
}

void solve(){
    int x1 = 0, y1 = 0, x2, y2, r, c1, c2;
    cin >> x1 >> y1 >> x2 >> y2 >> r >> c1 >> c2;

    queue<pair<int,int>>q;
    q.push({c1, c2});
    map<pair<int,int>,int>vis;
    vis[{c1, c2}] = 1;

    int ans = 0;
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i = 0; i < 8; i++){
            int a = dx[i] + x;
            int b = dy[i] + y;           
            if(valid(a, b, x1, y1, x2, y2)){
                if(vis[{a, b}]) continue;
                int p = (abs(c1 - a))*(abs(c1 - a)) + (abs(c2 - b))*(abs(c2 - b));
                if(p <= r*r){
                    ans++;
                    q.push({a, b});
                    vis[{a, b}] = 1;
                }
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
    // cin >> t;
    while(t--) solve();
    return 0;
}



