#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    map<char,int>mp;
    int ans = 0;
    for(int i = 0; i < 2*n - 2; i++){
        if(i % 2 == 0){
            mp[s[i]]++;
        } else{
            if(!mp[tolower(s[i])]) ans++;
        }
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