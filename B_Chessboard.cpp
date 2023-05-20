#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
   
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            char t;
            cin >> t;
           // cout << t << " ";
            if(t == '*'){
                cout << char(j + 'a') << (8 - i) << endl;
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
  //  cin >> t;
    while(t--) solve();
    return 0;
}
