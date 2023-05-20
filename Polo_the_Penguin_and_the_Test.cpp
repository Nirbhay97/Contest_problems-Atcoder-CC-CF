    #include <bits/stdc++.h>
    #define int long long 
    using namespace std;
    //Nirbhay kumar
    int dp[110][110];

    int dfs(int n, int w, int t[], int val[]){
        
        if(n < 0 or w == 0) return 0;
        if(dp[n][w] != -1) return dp[n][w];

        if(t[n] > w){
            dp[n][w] = dfs(n - 1, w, t, val);
            return dp[n][w];
        }else{
            dp[n][w] = max(val[n] + dfs(n - 1, w - t[n], t, val), dfs(n -1, w, t, val));
            return dp[n][w];
        }
    }

    signed main()
    {
        int t;
        cin>>t;
        while(t--)
        {
            int n,w;
            cin>>n>>w;
            int weight[n],value[n];
            for(int i=0;i<n;++i)
            {
                int c,p,t;
                cin>>c>>p>>t;
                weight[i]=t;
                value[i]=c*p;
            }
            for(int i=0;i<n+5;++i)
            {
                for(int j=0;j<w+5;++j)
                {
                    dp[i][j]=-1;
                }
            }
            cout<<dfs(n-1,w,weight,value)<<endl;
        }
        return 0;
    }