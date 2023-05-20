#include <iostream>
#include <string>
#include <bitset>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    int m = s.size();
    int ans = -1;
    for (int i = 0; i < (1 << m); i++) { // Try all possible bit patterns for the ?
        bitset<20> bits(i); // Convert the integer to a binary string with m bits
        bool valid = true;
        int x = 0;
        for (int j = 0; j < m; j++) {
            if (s[j] == '0') {
                if (bits[j]) {
                    valid = false; // Invalid bit pattern
                    break;
                }
            } else if (s[j] == '1') {
                if (!bits[j]) {
                    valid = false; // Invalid bit pattern
                    break;
                }
            } else {
                x |= (bits[j] << j); // Set the j-th bit of x to the j-th bit of the pattern
            }
        }
        if (valid && x <= n) {
            ans = max(ans, x); // Update the answer
        }
    }
    cout << ans << endl;
    return 0;
}
