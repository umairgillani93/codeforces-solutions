#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        int m;
        cin >> m;
        unordered_map<int, int> d_map;
        for (int i = 0; i < m; ++i) {
            int d;
            cin >> d;
            d_map[d]++;
        }

        bool possible = true;
        for (int i = 0; i < n && possible; ++i) {
            if (a[i] != b[i]) {
                if (d_map[b[i]] > 0) {
                    d_map[b[i]]--;
                } else {
                    possible = false;
                }
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}

