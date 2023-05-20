    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
    //Nirbhay kumar


    void solve(){

        string s;
        cin >> s;
        int r = 0;  
        int n = s.size();
        int p = 0;
        for(int i = 0; i < (int)s.size(); i++){
            if(s[i] == 'R')r++;
            if(i > 0 and s[i] == s[i - 1])p++;
        }
        int g = s.size() - r;
        if((g - r) == 0 and p <= 2) cout << "yes" << endl;
        else cout << "no" << endl;
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