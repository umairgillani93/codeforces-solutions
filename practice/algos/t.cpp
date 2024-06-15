#include <iostream>

using namespace std;

// Function to count number of values less than
// or equal to n that satisfy the given condition
int countValues(int n) {
    // unset_bits keeps track of count of un-set
    // bits in binary representation of n
    int unset_bits = 0;
    while (n) {
        if ((n & 1) == 0)
            unset_bits++;
        n = n >> 1;
    }

    // Return 2 ^ unset_bits i.e. pow(2, count of zero bits)
    return 1 << unset_bits;
}

int main() {
    int n = 4;
    cout << countValues(n) << '\n';
    return 0;
}

