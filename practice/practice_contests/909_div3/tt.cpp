#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        long long curr_sum = arr[0];
        long long max_sum = arr[0];
        
        for (int i = 1; i < n; i++) {
            if (arr[i] % 2 != arr[i - 1] % 2) { // alternating parities
                curr_sum += arr[i];
            } else {
                curr_sum = arr[i];
            }
            max_sum = max(max_sum, curr_sum);
        }
        
        cout << max_sum << '\n';
    }
    
    return 0;
}

