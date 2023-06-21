#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int om = 0, omtemp = 0;
    for(int i = 0 ;i < n; i++){
        int t;
        cin >> t;
        if(t == 0){
            omtemp = 0;
        }
        if(t > 0){
            omtemp++;
            om = max(om, omtemp);
        }
    }

    int ady = 0, adytemp = 0;
    for(int i = 0 ;i < n; i++){
        int t;
        cin >> t;
        if(t == 0){
            adytemp = 0;
        }
        if(t > 0){
            adytemp++;
            ady = max(ady, adytemp);

        }
    }
    if(om > ady) cout << "Om" << endl;
    else if(om < ady) cout << "Addy" << endl;
    else cout << "Draw" << endl;    
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}