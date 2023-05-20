#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){

    int n, x;
    cin >> n >> x;
    if(x > (n + 1) || x <= -n){
        cout << -1 << endl;
        return;
    }

    if(x == 0){
       // if(n == 1)
        cout << '-';
        int N = n;
        N -= 1;
        while(N--){cout << '*';}
        cout << endl;
    }else if(x > 0){
        int X = abs(x);
        X--;
        int N = n;
        int ttt = N - X;
        if(X > 0){
            while(X--){cout << "+";} 
        } 
        if(ttt > 0){
            while(ttt--) cout << '*';
        }  
        cout << endl;       
    }else{
        int X = abs(x);
        X++;
        int tt = n - X;
        if(tt > 0) while(tt--){cout << "*";}  
        if(X > 0) while(X--) cout << '-';     
        cout << endl;
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