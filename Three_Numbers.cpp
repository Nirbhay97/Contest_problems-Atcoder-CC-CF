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

    vector<int>nums(3);
    cin >> nums[0] >> nums[1] >> nums[2];
    sort(nums.begin(),nums.begin()+3);

    if( (nums[2] - nums[0]) % 2 == 1){
    	cout << -1 << endl;
    	return;
    }
    int temp = ( nums[2] - nums[0])/2;
    nums[1] += temp;
    nums[0] +=  temp, nums[2] -= temp;
 
    if ( (nums[1] - nums[0]) & 1){
    	cout << -1 << endl;
    	return;
    }

    temp += (nums[1] - nums[0] )/2;
    cout << temp << endl;
    
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