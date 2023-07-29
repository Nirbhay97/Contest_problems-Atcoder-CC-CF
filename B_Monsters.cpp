#include <bits/stdc++.h>
#define int long long 
using namespace std;
#define PII pair<int, int>
//Nirbhay kumar

class Compare {
public:
    bool operator()(PII below, PII above)
    {
        if (above.first > below.first) {
            return true;
        }
        else if (below.first == above.first
                 && above.second < below.second) {
            return true;
        }
 
        return false;
    }
};

void solve(){
    int n, k;
    cin >> n >> k;
    priority_queue<PII, vector<PII>, Compare> pq;

    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        t = t % k;
        if(t == 0) t += k;
        pq.push({t, i + 1});
    }

    while(pq.top().first > 0){
        int ind = pq.top().second;
        int val = pq.top().first;
        val -= k;
        pq.pop();
        if(val <= 0) cout << ind << " ";
        pq.push({val, ind});
    }
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