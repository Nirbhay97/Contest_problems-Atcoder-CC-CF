#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;

    string s;
    cin >> s;
    int se = 0; //alce
    int alice = 0, bob = 0; 

    for(int i = 0; i  < n; i++){
        if(s[i] == 'A'){
            if(se == 0)alice++;
            else{
                se = 0;
            }
        }else{
            if(se == 1)bob++;
            else se = 1;
        }
    }

    cout << alice << " " << bob << endl;
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