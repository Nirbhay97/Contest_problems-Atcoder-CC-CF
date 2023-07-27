#include <iostream>
#include <vector>
using namespace std;
int mod = 1e9 + 7;

int power(long long x, unsigned int y, int p)
{
    int res = 1; 
 
    x = x % p; 
  
    if (x == 0) return 0; 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
 
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    cout << power(2, n - 1, mod);
    return 0;
}
