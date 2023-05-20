#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    char ch[4] = {'m', 'e', 'o', 'w'};

    for(int i = 0; i < n; i++){
        s[i] = tolower(s[i]);
    }

  
    auto ip = unique(s.begin(), s.end());
  
    string ans = string(s.begin(), ip);
    if("meow" == ans )
     cout << "YES" << endl;
    else cout << "NO" << endl;

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