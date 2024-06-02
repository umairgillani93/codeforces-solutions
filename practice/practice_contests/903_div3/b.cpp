#include <iostream>
#include <algorithm>
using namespace std;

bool canBeEqualWithCuts(int a, int b, int c) {
    // Sort a, b, c in non-decreasing order
    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
    
    // After sorting, we have a <= b <= c
    // Check if we can make all three equal with up to 3 cuts
    
    // 1. Check if already equal
    if (a == b && b == c) return true;
    
    // 2. Check if the sum of the three is divisible by 3
    if ((a + b + c) % 3 == 0) return true;
    
    // 3. Check specific cases where 3 cuts can help
    // If a + b == c, it means a and b can be combined to match c
    if (a + b == c) return true;
    
    // Check if we can make a == b and b == c or any such valid split within 3 cuts
    if (c % 2 == 0 && a == b && a * 2 == c) return true; // case like 1,1,2
    if ((a + b + c) % 3 == 0) return true;
    
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if (canBeEqualWithCuts(a, b, c)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}

