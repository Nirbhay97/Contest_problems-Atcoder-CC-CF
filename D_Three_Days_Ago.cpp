    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
    //Nirbhay kumar


    void solve(){
        string s;
        cin >> s;
        int n = s.size();
        map<int, int> hash;
        hash[0] = 1;

        int pre = 0;
        int count = 0;

        for (int i = 0; i < n; i++) {
    
            pre ^= (1 << (s[i] - '0') - 49);
            count += hash[pre];
            hash[pre] = hash[pre] + 1;
        }
        
        cout << count << endl;
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