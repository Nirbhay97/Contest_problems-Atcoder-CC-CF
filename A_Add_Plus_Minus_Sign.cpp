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

    int n;
    cin >> n;

    string s;
    cin >> s;

    string ans = "";
    int x = 1;
    for(int i = 0; i < n; i++){

        if(s[i] == '0') ans += '+';
        else{
            if(x) ans += '+';
            else ans += '-';
            x = x^1;

        }
    }

    for(int i = 1; i < n; i++) cout << ans[i];
    cout << endl;
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