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

    int n, m , k;
    cin >> n >> m >> k;
    vector<int>v(m);

    for(auto &it : v) cin >> it;

    int req = (n + k - 1)/k;

    int flag = false;
    for(int i = 0; i < m; i++){
        if(v[i] > req) {

            cout << "NO" << endl;
            flag = true;
            break;
        }
    }

    if(!flag) cout << "YES" << endl;

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