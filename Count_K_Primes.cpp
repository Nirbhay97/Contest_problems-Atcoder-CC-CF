#include "bits/stdc++.h"
using namespace std;

#define MAXN 100001
int spf[MAXN];
int arr[MAXN];

void sieve()
{
	spf[1] = 1;
	for (int i=2; i<MAXN; i++)
		spf[i] = i;

	for (int i=4; i<MAXN; i+=2)
		spf[i] = 2;

	for (int i=3; i*i<MAXN; i++)
	{
		if (spf[i] == i)
		{
			
			for (int j=i*i; j<MAXN; j+=i)
				if (spf[j]==j)
					spf[j] = i;
		}
	}
}

int getFactorization(int x)
{
	set<int> ret;
	while (x != 1)
	{
		ret.insert(spf[x]);
		x = x / spf[x];
	}
	return ret.size();
}

void solve(){
    int a, b, k;
    cin >> a >> b >> k;
    int ans = 0;
    for(int i =  a; i <= b; i++){
        if(arr[i] == k)ans++;
    }
    cout << ans << endl;
}


signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    sieve();
    fill(arr, arr + 100001, 0);
    arr[0] = 1, arr[1] = 1, arr[2] = 1;
    for(int i = 3; i < 100001 ; i++){
        arr[i] = getFactorization(i);
    }

    while(t--) solve();
    return 0;
}
