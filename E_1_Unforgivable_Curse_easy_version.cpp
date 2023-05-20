#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, k;
    cin >> n >> k;
    string s, t;
    cin >> s;
    cin >> t;

    string s1 = s, s2 = t;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1 != s2){
        cout << "NO" << endl;
        return;
    }

    if(n >= 6){
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s == t) cout << "YES";
        else cout << "NO";
    }else if(n == 5){
        if(s[2] == t[2]) cout << "YES";
        else cout << "NO";
    }else if(n == 4){
        if(s[1] == t[1] and s[2] == t[2]) cout << "YES";
        else cout << "NO";
    }else{
        if(s == t) cout << "YES";
        else cout << "NO";
    }

    cout << endl;
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