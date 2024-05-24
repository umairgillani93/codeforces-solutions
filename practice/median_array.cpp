#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int mid = (n + 1) / 2 - 1;
        int ans = count(arr.begin() + mid, arr.end(), arr[mid]);
        cout << ans << '\n';
    }
    return 0;
}
