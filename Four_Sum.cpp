#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
    int n, t;
	cin >> n >> t;
    vector<int>arr, sums;
	arr.resize(n);
	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	if (n < 4) { cout << "0" << endl; return 0; }

	sort(arr.begin(), arr.end());
	sums.resize(t + 1);

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i + 1; ((j < n) && (t >= arr[i] + arr[j])); ++j)
			ans += sums[t - arr[i] - arr[j]];

		for (int j = 0; ((j < i) && (arr[i] + arr[j] <= t)); ++j)
			sums[arr[i] + arr[j]]++;
	}

	cout << ans << endl;
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