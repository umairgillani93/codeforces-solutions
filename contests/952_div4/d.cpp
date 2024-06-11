#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> xc, yc;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                char cell;
                cin >> cell;
                if (cell == '#') {
                    xc.push_back(i + 1);
                    yc.push_back(j + 1);
                }
            }
        }

        sort(xc.begin(), xc.end());
        int medx = xc[xc.size() / 2];

        sort(yc.begin(), yc.end());
        int medy = yc[yc.size() / 2];

        cout << medx << " " << medy << '\n';
    }

    return 0;
}

