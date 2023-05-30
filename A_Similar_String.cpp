#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar



void solve(){
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    for(int i= 0; i < n; i++){
        if(a[i] == 'l' ) a[i] = '1';
        if(a[i] == 'o') a[i] = '0';
    }

    for(int i= 0; i < n; i++){
        if(b[i] == 'l' ) b[i] = '1';
        if(b[i] == 'o') b[i] = '0';
    }

    bool flag = false;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            cout << "No" << endl;
            flag = true;
            break;
        }
    }

    if(!flag) cout << "Yes" << endl;
    

}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
  //  cin >> t;
    while(t--) solve();
    return 0;
}