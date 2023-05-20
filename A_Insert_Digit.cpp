#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i  < n; i++) cin >> arr[i];
    stack<int>st;
    st.push(arr[0]);
    st.push(arr[0]);
    for(int i = 1; i < n; i++){
        int req = arr[i];
        int avl = st.top();
        st.push(max(avl, req));
    }

    vector<int>ans;
    while (!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }

    reverse(ans.begin(), ans.end());
    for(auto it : ans) cout << it << " ";
    cout << endl;
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