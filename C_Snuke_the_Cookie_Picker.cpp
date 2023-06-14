#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int m , n;
    cin >> m >> n;

    vector<vector<char>>arr(m, vector<char>(n));
    pair<int,int>start = {600,600}, end = {-1,-1};
    int flag = false;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
            if(arr[i][j] == '#'){
                start.first = min(start.first, i);
                start.second = min(start.second, j);
                end.first = max(end.first, i);
                end.second = max(end.second, j);
            }
        }
    }

    // cout << start.first << " " << start.second << endl;
    // cout << end.first << " " << end.second << endl;
    for(int i = start.first; i <= end.first; i++){
        for(int j = start.second; j <= end.second; j++){
            if(arr[i][j] == '.'){
                cout << i + 1<< " " << j + 1 << endl;
                return;
            }
        }
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