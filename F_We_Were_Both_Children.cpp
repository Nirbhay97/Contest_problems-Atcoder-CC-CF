// #include <bits/stdc++.h>
// #define int long long 
// using namespace std;
// //Nirbhay kumar


// void solve(){
//     int n;
//     cin >> n;
//     map<int,int>mp;
//     int arr[n];
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
//     sort(arr, arr + n);

//     int dist[n + 1];
//     memset(dist, 0, sizeof dist);

//     for(int i = 0; i < n; i++){
//         int p = arr[i];
//         if(p > n) continue;
//         dist[arr[i]]++;
//     }
// }


// signed main(){
//     ios::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
//     int t = 1;
//     cin >> t;
//     while(t--) solve();
//     return 0;
// }

#include <iostream>
#include <vector>

std::vector<int> findMultiples(int number, int lower_limit, int upper_limit) {
    std::vector<int> multiples;
    
    // Find the first multiple greater than or equal to the lower_limit
    int first_multiple = ((lower_limit + number - 1) / number) * number;

    // Add the first multiple to the list
    multiples.push_back(first_multiple);

    // Find subsequent multiples until the last multiple is less than or equal to the upper_limit
    while (first_multiple + number <= upper_limit) {
        first_multiple += number;
        multiples.push_back(first_multiple);
    }

    return multiples;
}

int main() {
    int number, lower_limit, upper_limit;
    std::cin >> number >> lower_limit >> upper_limit;

    std::vector<int> multiples = findMultiples(number, lower_limit, upper_limit);

    std::cout << "Multiples of " << number << " between " << lower_limit << " and " << upper_limit << " are: ";
    for (int num : multiples) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
