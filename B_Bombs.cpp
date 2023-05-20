#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1 , 1, 1, 0, -1, -1, -1};

bool fine(int i, int j, vector<vector<char>>&arr , vector<vector<int>>&vis ){
    if(i < 0 or i >= vis.size() or j < 0 or j >= vis[0].size() or vis[i][j] == 1) return false;
    return true;
}

bool isnumber(char ch){
    return ch <= '9' and ch >= '0';
}

void dfs(int i, int j, vector<vector<char>>&arr , vector<vector<int>>&vis){

    vis[i][j] = 1;
    if(!arr[i][j]) arr[i][j] = '.';
    for(int k = 0; k < 8; k++){
        int x = i + dx[k];
        int y = j + dy[k];
        int dis = abs(x - i) + abs(y - j);
        if(fine(x, y, arr, vis) and dis <= (arr[i][j] - '0')){
            dfs(x, y, arr, vis);
        }
    }
}

void solve(){
    int r, c;
    cin >> r >> c;
    vector<vector<char>>arr(r, vector<char>(c));
    vector<vector<int>>vis(r, vector<int>(c, 0));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0;  j < c; j++){
            if(!vis[i][j] and isnumber(arr[i][j])) dfs(i, j, arr, vis);
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << arr[i][j];
        }
        cout << endl;
    }
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
  //  cin >> t;
    while(t--) solve();
    return 0;
}