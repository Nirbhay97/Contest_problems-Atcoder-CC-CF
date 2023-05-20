#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i+=2){
        swap(s[i], s[i + 1]);
    }

    for(int i = 0; i < s.size(); i++) cout << s[i];
    cout  << endl;
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