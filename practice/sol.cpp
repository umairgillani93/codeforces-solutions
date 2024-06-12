#include <iostream>
using namespace std;

// Function to find the number of trailing zeros in binary representation
int countTrailingZeros(long long n) {
    int count = 0;
    while ((n & 1) == 0) {
        n >>= 1;
        count++;
    }
    return count;
}

void solve() {
    long long x, y;
    cin >> x >> y;          // Read input values x and y
    long long z = x ^ y;    // Compute x XOR y
    int k = countTrailingZeros(z); // Find the number of trailing zeros in z
    cout << (1LL << k) << '\n'; // Output 2^k
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t; // Read the number of test cases
    while (t--) {
        solve(); // Solve each test case
    }
    return 0;
}

