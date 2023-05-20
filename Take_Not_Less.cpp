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


    int dy[8] = {0,-1,-1,-1,0,1,1,1};
    int dx[8] = {1,1,0,-1,-1,-1,0,1};

    bool issafe(int i, int j, vector<vector<int>>&grid){
        int n = (int)grid.size();
        if(i < 0 or i >= n or j < 0 or j  >= n) return false;
        return true;
    }

    int maxDistance(vector<vector<int>>& grid) {
        
        int ans = INT_MIN;
        int n = (int)grid.size();
        int water = 0;
        for(int i = 0; i < n; i++){

            for(int j = 0; j < n; j++){
                if(grid[i][j] == 0) water++;

                if(grid[i][j] == 0){
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    int temp = INT_MAX;
                    map<pair<int,int>, bool>mp;
                    mp.clear();
                    mp[{i,j}] = true;

                    while(!q.empty()){
                        
                        int ii = q.front().first;
                        int jj = q.front().second;
                        if(grid[ii][jj] == 1)temp = min(abs(ii - i) + abs(jj - j), temp);
                        q.pop();
                        for(int k = 0; k < 8; k++){
                            int x = ii + dy[k];
                            int y = jj + dx[k];
                            if(issafe(x,y,grid) and mp[{x,y}] == false){
                                q.push({x,y});
                                mp[{x,y}] = true;
                            }
                        }
                    }
                    ans = max(temp, ans);
                }  
            }               
        }

        if(water == n*n or water == 0)return -1;
        return ans;
    }

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        vector<vector<int>>grid = {{1,0,0},{0,0,0},{0,0,0}};
        int ans = maxDistance(grid);
        cout << ans << endl;
    }
    return 0;
}