#include <algorithm>
#include <map>
#include <iostream>
#include <set>
#include <array> 
#include <deque>
#include <forward_list>
#include <list>
#include <iterator>
#include <vector>
#include <queue>
#include <climits>
#include <stack>
#include <cmath>
#include <unordered_set>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#include <string>
#include <tuple>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){

    string a, b;
    cin >> a >> b;
    if(a.size() == b.size()){
        bool ans = a == b;
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }else{
        
        string s1,s2;
        if(a.size() < b.size()){
            s1 = a;
            s2 = b;
        }else{
            s1 = b;
            s2 = a;
        }

        int j = 0;
        int ans = 0;
        for(int i = 0; i < s2.size(); i++){

            if(s2[i] == s1[j]){
                j++;
                ans++;
            }

            if(ans == s1.size()) break;
        
        }

        if(ans == s1.size()) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
}



signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
return 0;
}