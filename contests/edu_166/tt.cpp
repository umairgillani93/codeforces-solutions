#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n + 1);

        long long sum_a = 0, sum_b = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum_a += a[i];
        }
        
        for (int i = 0; i < n + 1; ++i) {
            cin >> b[i];
            sum_b += b[i];
        }
        
        long long delta = sum_b - sum_a;
        bool found = false;
        
        for (int i = 0; i < n + 1; ++i) {
            long long remaining_sum_b = sum_b - b[i];
            if (remaining_sum_b == sum_a) {
                found = true;
                break;
            }
        }
        
        if (found) {
            cout << delta << '\n';}

}
    return 0;
}

