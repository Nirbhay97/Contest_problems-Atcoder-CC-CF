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

    int flag = false;
    for(int i = 0; i < n; i++){
        if(s[i] != t[i]){
            flag = true;
        }
    }

    if(!flag){
        cout << "YES" << endl;
        return;
    }

    if(k >= n){
         cout << "NO" << endl;
         return;
    }

    if(n >= 2*k) cout << "YES";
    else if(k == n - 1){
        char temp = s[n - 1];
        s[n - 1] = s[0];
        s[0] = temp;

        int flag = false;
        for(int i = 0; i < n; i++){
            if(s[i] != t[i]){
                flag = true;
            }
        }

        if(!flag){
            cout << "YES";
        }else cout << "NO";

    }else if(k == n - 2){
        char ch1[4], ch2[4];
        ch1[0] = s[0];
        ch1[1] = s[1], ch1[2] = s[n - 1], ch1[3] = s[n - 2];
        ch2[0] = t[0];
        ch2[1] = t[1], ch2[2] = t[n - 1], ch2[3] = t[n - 2];

        int f = false;
        for(int i = 0; i < 4; i++){
            if(ch1[i] != ch2[i])f = true;
        }
        if(!f) cout << "YES";
        else cout << "NO";
    }else{
        int diff = n - k;
        
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