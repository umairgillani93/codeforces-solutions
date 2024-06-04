#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        int fav_value = a[f - 1];
        sort(a.begin(), a.end(), greater<int>());
        int greater_count = count_if(a.begin(), a.end(), [fav_value](int v) {
            return v > fav_value;
        });
        int equal_count = count(a.begin(), a.end(), fav_value);
        if (greater_count >= k) {
            cout << "NO" << endl;
        } else if (greater_count + equal_count <= k) {
            cout << "YES" << endl;
        } else {
            cout << "MAYBE" << endl;
        }
    }

    return 0;
}

