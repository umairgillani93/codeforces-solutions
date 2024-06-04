#include <iostream>

uint64_t modPow(uint64_t base, uint64_t exponent) {
    uint64_t result = 1;
    base %= 100; // Reduce base to last 2 digits

    while (exponent > 0) {
        if (exponent & 1) {
            result = (result * base) % 100; // Multiply and reduce
        }
        exponent >>= 1;
        base = (base * base) % 100; // Square and reduce
    }

    return result;
}

int main() {
    uint64_t n = 2; /* your large value of n */
    int lastTwoDigits = modPow(5, n) % 100; // Compute the last 2 digits

    std::cout << "Last 2 digits: " << lastTwoDigits << std::endl;

    return 0;
}

