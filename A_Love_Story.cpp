#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    string s;
    cin >> s;
    string temp = "codeforces";
    int cnt = 0;
    for(int i = 0; i < 10; i++){
        if(s[i] != temp[i])cnt++;
    }
    cout << cnt << endl;
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