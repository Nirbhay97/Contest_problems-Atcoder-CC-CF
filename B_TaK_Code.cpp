#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    
    vector<vector<char>>kot(9, vector<char>(9, '.'));
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            kot[i][j] = '#';
        }
    }

    for(int i = 6; i < 9; i++){
        for(int j = 6; j < 9; j++){
            kot[i][j] = '#';
        }
    }

    int n, m;
    cin >> n >> m;
    vector<vector<char>>arr(n, vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i <= n - 9; i++){
        for(int j = 0; j <= m - 9; j++){

            int flag = 0;
            for(int k = 0; k < 3; k++){
                for(int l = 0; l < 3; l++){
                    if(arr[i + k][l + j] != kot[k][l]){
                        flag = true;
                        break;
                    }
                }
            }

            for(int k = 0; k < 4; k++){
                if(arr[i + 3][j + k] != '.'){
                    flag = true;
                    break;
                }
            }

            for(int k = 5; k < 9; k++){
                if(arr[i + 5][j + k] != '.'){
                    flag = true;
                    break;
                }
            }

            // for(int k = 0; k < 3; k++){
            //     if(arr[j + 3][i + k] != '.'){
            //         flag = true;
            //         break;
            //     }
            // }
            
            for(int k = 6; k < 9; k++){
                if(arr[i + k][j + 5] != '.'){
                    flag = true;
                    break;
                }
            }

            for(int k = 6; k < 9; k++){
                for(int l = 6; l < 9; l++){
                    if(arr[i + k][l + j] != kot[k][l]){
                        flag = true;
                        break;
                    }
                }
            }

            if(!flag) cout << i + 1 << " " << j + 1 << endl;
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