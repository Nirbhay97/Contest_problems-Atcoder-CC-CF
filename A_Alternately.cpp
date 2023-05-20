#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int flag = false;
    for(int i = 0; i < n - 1; i++){
        if(s[i] != s[i + 1])continue;
        else{
           flag = true;
           break;
        }
    }

    if(!flag) cout << "Yes" << endl;
    else cout << "No" << endl;
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