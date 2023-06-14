#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    char a, b;
    cin >> a >> b;
    int arr[7] = {3,1,4,1,5,9,0};
    if(b < a){
        char t = a;
        a = b;
        b = t;
    }

    int ans = 0;
    int i = a -'A';
    for( ; i < 7; i++){
        if((char)(i + 'A') == b){
            break;
        }
        ans += arr[i];
    }
    cout << ans << endl;
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