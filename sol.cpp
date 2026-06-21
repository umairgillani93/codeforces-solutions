#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int dist = 0;
        int ans = 0;
        int arr[26] = {0}; // FIX 1: Initialize all elements to 0

        for (int i = 0; i < n; i++) {
            // FIX 2: Check if seen for the FIRST time (value is 0)
            if (arr[s[i] - 'a'] == 0) { 
                dist++;         // Increment unique count
                arr[s[i] - 'a'] = 1; // Mark as seen
            }
            ans += dist;
        }
        cout << ans << '\n'; // FIX 3: Output 'ans', not 'dist'
    }
    return 0;
}
