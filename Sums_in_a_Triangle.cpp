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


void solve(){

    int n;
    cin >> n;
    vector<vector<int>>dp(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++){

        for(int j = 0; j <= i; j++){

            int temp;
            cin >> temp;
            dp[i][j] = temp;

        }

        for(int j = i + 1; j < n; j++){

            dp[i][j] = -1;
        }
    }

    for(int i = 1; i < n; i++){

        for(int j = 0; j <= i; j++){

            int prev = j == 0 ? 0 : dp[i - 1][j - 1];
            dp[i][j] = max(dp[i][j] + dp[i - 1][j], dp[i][j] + prev);
        }
    }

    cout << *max_element(dp[n - 1].begin(), dp[n - 1].end()) << endl;
    
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
while(t--){
    solve();
}
return 0;
}