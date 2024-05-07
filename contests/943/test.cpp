#include <bits/stdc++.h>

using namespace std;

int main() {
    int b = 3; // Start with b = 3
    int a = b + 2; // Start with a = b + 2

    // Increment a until a % b equals 2
    while (a % b != 2) {
        a++;
    }

    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}
