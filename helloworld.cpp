#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


    string ans;
    void dfs(string s, int n, map<string, int>&mp){
        if(s.size() == n){
            if(mp[s] == 0){
                ans = s;
            }
            return;
        }

        dfs(s + '0', n, mp);
        dfs(s + '1', n, mp);
        s.pop_back();
    }
    string findDifferentBinaryString(vector<string>& nums) {
        
        map<string, int>mp;
        int n = nums.size();
        for(auto it : nums) mp[it]++;
        string s = "";

        dfs(s, n, mp);
        return ans;
    }

signed main(){
ios::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int t = 1;
cin >> t;
while(t--){
    vector<string>nums{"01", "10"};
    cout << findDifferentBinaryString(nums);
}
return 0;
}