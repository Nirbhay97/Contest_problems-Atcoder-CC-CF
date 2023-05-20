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
#include <iomanip>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    double p;
    cin >> p;  
    if(p > .5) cout << fixed << setprecision(6) << 10000 + 2*(1 - p)*(10000*p) - (10000*(1 - p)) << endl;
    else cout << fixed << setprecision(6) << 10000 + 2*(p)*(10000*(1 - p)) - (10000*p) << endl;        

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