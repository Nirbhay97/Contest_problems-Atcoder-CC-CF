#include <bits/stdc++.h>
#define int long long 
using namespace std;
//Nirbhay kumar


void solve(){
        int n,i,x;
	    vector<int> v;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>x;
	        v.push_back(x);
	    }
	    int gcd;
	    gcd=v[0];
	    vector<int> pre;
	    for(i=0;i<n;i++)
	    {
	        gcd=__gcd(gcd,v[i]);
	        pre.push_back(gcd);
	    }
	    gcd=v[n-1];
	    vector<int> suf;
	    for(i=n-1;i>=0;i--)
	    {
	        gcd=__gcd(gcd,v[i]);
	        suf.push_back(gcd);
	    }
	    reverse(suf.begin(),suf.end());
	    int res=0;
	    for(i=1;i<n-1;i++)
	    {
	        if(__gcd(pre[i-1],suf[i+1])!=1)
	        {
	            res++;
	        }
	    }
	    if(pre[n-2]!=1)
	    {
	        res++;
	    }
	    if(suf[1]!=1)
	    {
	        res++;
	    }
    cout << res<< endl;
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