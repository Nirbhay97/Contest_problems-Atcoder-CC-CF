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

    set<int>x, y;

    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 2; j++){

            int t;
            cin >> t;
            if(j  == 0) x.insert(t);
            else y.insert(t);
        }
    }

    if(x.size() <= 2 and y.size() <= 2) cout << "NO" << endl;
    else cout << "YES" << endl;
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