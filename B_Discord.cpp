#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){   
    int n, m;
    cin >> n >> m;
    // vector<vector<int>>arr(m, vector<int>(n));
    // cout << n << m;
    int arr[m][n];

    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            cin >> arr[j][i];
        }
    }

    int ans = 0;
    for(int i = 1; i <= n; i++){

        vector<int>temp(n + 1, 0);
        for(int j = 0; j < m; j++){
            for(int k = 0; k < n; k++){
                if(arr[j][k] == i){
                    if(k > 0 and k < n - 1){
                        temp[arr[j][k + 1]]++;
                        temp[arr[j][k - 1]]++;
                    }else if(k == 0 and k <= n - 1){
                        temp[arr[j][k + 1]]++;
                    }else if(k == n - 1 and k >= 0){
                        temp[arr[j][k - 1]]++;
                    }
                    
                }
            }
        }

        int t = 0;
        for(int j = 1; j <= n; j++){
            if(j != i and temp[j] == 0){
                t++;
            }
            // cout << temp[j] << " ";
        }
        // cout << endl;

        ans += t;
    }

     cout << ans/2 << endl;
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