
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
    
    if(n == 1){
        cout << 0 << endl;
        return;
    } 
    if(n % 2)
        cout << (n - n/2)*(n/2) - 1 << endl;
    else {

        if(n/2 % 2){
            cout << (n/2 - 2)*(n/2 + 2) - 1 << endl;
        }else cout << (n/2 - 1)*(n/2 + 1) - 1 << endl;
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