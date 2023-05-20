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
    int ans = 0;
    stack<int>st;
    st.push(0);
    for(int i = 0; i < n; i++){
        int  t;
        cin >> t;
        if(t > 0){
            int prev = st.top();
            st.pop();
            prev += t;
            st.push(prev);
        }
        else{
            int req = st.top();
            st.pop();
            if(req > 0) req--;
            else ans++;
            st.push(req);
        }
    }
    cout << ans << endl;
}



signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    //cin >> t;
    while(t--) solve();
    return 0;
}