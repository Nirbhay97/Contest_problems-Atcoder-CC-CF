#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        long long c;
        cin >> n >> c;

        long long summ = 0;
        for (long long i = 0; i < n; ++i) {
            long long val;
            cin >> val;
            summ += val;
            c -= (val) * val;
        }

        c = -1*c;
        long long b = 4 * summ;
        long long a = 4 * (n);

        long long discr = b * b - 4 * a * c;
        long long sqrt_discr = (sqrt(discr));

        long long ans = ((-b) + sqrt_discr) / (2 * a);
        cout << ans << endl;
    }

    return 0;
}
