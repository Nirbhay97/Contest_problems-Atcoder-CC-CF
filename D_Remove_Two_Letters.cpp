#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){

    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int ans = 1;
    char prev = s[0];
    for(int i = 1; i < n - 1; i++){
        
        if(s[i + 1] != prev){
            ans++;
        }
        prev = s[i];
    }
    
    cout << ans << endl;
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