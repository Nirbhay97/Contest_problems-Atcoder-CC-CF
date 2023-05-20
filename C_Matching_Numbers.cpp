#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    
    if(n % 2 == 0) cout << "No" << endl;
    else{
        cout << "Yes" << endl;
        int sum = 2*n + 1;
        for(int i = n; i >= 1; i--){
            cout << i << " " << sum - i << endl;
            if((sum - i) == 2*n) sum = i + n;
            sum++;
        }
    }
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