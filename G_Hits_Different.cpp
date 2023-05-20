#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n = 9; // the can number that is hit
    int n_squared = n * n;
    int rows = 2023;
    int row_of_hit_can = ceil(sqrt(n_squared)); // the row number of the hit can
    int cans_to_fall = rows - row_of_hit_can + 1; // the number of rows that fall
    
    // calculate the sum of the numbers on all the cans that fall
    int sum = 0;
    for (int i = row_of_hit_can; i <= rows; i++) {
        sum += (i - 1) * cans_to_fall + n_squared;
    }
    
    // print the result
    cout << "The sum of the numbers on all the cans that fall is " << sum << endl;
    
    return 0;
}
