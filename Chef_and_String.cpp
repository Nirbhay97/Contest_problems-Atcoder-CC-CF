#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    string s;
    cin >> s;

    int n = s.size();
    int flag = true;
    if(n&1){
        for(int i = 1; i < n; i++) if(s[i] != s[i - 1]){
            cout << "NO";
            flag = false;
            break;
        }
    }else{
        char fir = s[0], sec = s[1];
        for(int i = 2; i < n - 1; i += 2){
            if(fir != s[i] or sec != s[i + 1]){
                cout << "NO";
                flag = false;
                break;
            }
        }
    }

    if(flag) cout << "YES";
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