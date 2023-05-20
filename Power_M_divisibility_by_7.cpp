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

int exp(int n, int m){

    int ans = 1;
    n %= 10;
    if ( m == 0 ) return ans;
    if(n == 0) return 0;
    while(m > 0){
        if(m % 2) ans = (ans*n) % 10;
        m /= 2;
        n = n*n % 10;   
    }
    // cout << " ans : " << ans << endl;
    return ans;
}

void solve(){
    int n, m;
    cin >> n >> m;
    
    long long ans = 0LL;
    while(n){

        int temp = n % 10;
        int dm = exp(temp, m);
        ans = (long long)ans*10 + (long long)dm % 10;
        n /= 10;
    }
    // cout << ans << endl;

    // cout << ans << endl;
    if(ans % 7LL) cout << "NO";
    else cout << "YES";
    cout << endl;
    return;
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