#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        // Convert the string to a vector of integers
        vector<int> digits(s.size());
        for (size_t i = 0; i < s.size(); ++i) {
            digits[i] = s[i] - '0';
        }

        // Count the number of zeros in the string
        int zeroes = count(digits.begin(), digits.end(), 0);
        vector<int> cnt(2, 0);
        long long ans = 0;
        for (int c : digits) {
            cnt[c]++;
            if (c == 0) {
                ans += (cnt[1] > 0) ? 1 : 0;
            } else {
                ans += (zeroes - cnt[0]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

