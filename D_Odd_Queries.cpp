#include <bits/stdc++.h>
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
using namespace std;
#define int long long

signed main(){
    int test;
    cin >> test;
    while(test--) {
        int n, queries;
        cin >> n >> queries;
        vector<int>arr(n);
        for(int i = 0; i < n; i++ ) cin >> arr[i];
        vector<int>nums(n + 1, 0);
        int sum = accumulate(arr.begin(), arr.end(), 0);
        for(int i = 1; i <= n; i++) nums[i] = nums[i - 1] + arr[i - 1];

        for(int i = 0; i < queries; i++){
            int left, right, k;
            cin >> left >> right >> k;
            int len = right - left + 1;
            int dupllicate = sum -  (nums[right] - nums[--left]) + len*k;
            if(dupllicate % 2 == 1) cout << "YES";
            else cout << "NO";
            cout << endl;
        }
    }
    return 0;
}