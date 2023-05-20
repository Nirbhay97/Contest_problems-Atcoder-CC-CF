#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int r, c;
    cin >> r >> c;
    char arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] <= '9' and arr[i][j] >= '0'){
                for(int k = 0; k < r; k++){
                    for(int l = 0; l < c; l++){
                        int dis = abs(i - k) + abs(j - l);
                        if(arr[k][l] == '#' and dis <= (arr[i][j] - '0')){
                            arr[k][l] = '.';
                        }
                    }
                }
            }
        }
    }

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++)
            if(arr[i][j] == '#')cout << '#';
            else cout << '.';
        cout << endl;
    }
    cout << endl;
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