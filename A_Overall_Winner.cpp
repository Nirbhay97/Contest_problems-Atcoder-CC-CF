#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int aa = 0, tt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'A')aa++;
    }

    tt = n - aa;

    if(tt > aa) cout << "T";
    else if(aa > tt) cout << 'A';
    else {
        for(int i = n - 1; i > 0; i--){
            if(s[i - 1] != s[i]){
                cout << s[i - 1];
                break;
            }
        }
    }
    cout << endl;
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}