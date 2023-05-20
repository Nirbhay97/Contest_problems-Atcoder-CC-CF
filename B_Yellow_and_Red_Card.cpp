#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, q;
    cin >> n >> q;

    map<int,int>mp;
    for(int i = 0; i < q; i++){
        int c, x;
        cin >> c >> x;
        
        if(c == 1){
            mp[x]++;
        }else if(c == 2){
            mp[x] += 2;
        }else{

            if(mp[x] >= 2){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
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