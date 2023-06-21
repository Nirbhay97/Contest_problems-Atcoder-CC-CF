// @author: Vivek
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        ll vc = 0, loop, itr = 0;
        for (int i = 0; i < n; i++)
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                vc++;

        loop = (vc / k) - 1;
        vector<int> gap(vc, 0);
        while (loop--)
        {
            ll ind = itr, sz = k;
            for (; ind < n; ind++)
            {
                if (s[ind] == 'a' || s[ind] == 'e' || s[ind] == 'i' || s[ind] == 'o' || s[ind] == 'u')
                    sz--;
                if (sz == 0)
                    break;
            }

            ll i = ind + 1;
            for (; i < n; i++)
            {
                if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                    break;
                else
                    gap[loop]++;
            }
            itr = i;
        }

        ll ans = 1;
        for (int e : gap)
            ans = (ans * (e + 1)) % mod;

        cout << ans << "\n";
    }
    return 0;
}