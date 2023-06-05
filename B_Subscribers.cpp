#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar

void help(int n, int till){
    string s = to_string(n);
    int t = (int)s.size();
    int i = t - 1;
    int p = till;
    while(till--){
        s[i] = '0';
        i--;
    }
    stol(s);
    // while(p--) s += '0';
    cout << s << endl;

}

void solve(){
    int n;
    cin >> n;
    if(n < 1000 ) cout << n << endl;
    else if(n < 10000) help(n, 1);
    else if(n < 100000 ) help(n, 2);
    else if(n < 1000000) help(n, 3);
    else if(n < 10000000) help(n, 4);
    else if(n < 100000000) help(n, 5);
    else help(n, 6);
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