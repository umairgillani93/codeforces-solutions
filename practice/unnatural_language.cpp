#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<char> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<string> res;
        int i = n - 1;
        while (i >= 0) {
            string new_s = "";
            if ((a[i] == 'a' || a[i] == 'e') && i - 1 >= 0) {
                new_s += a[i];
                new_s += a[i - 1];
                i -= 2;
            } else if (i - 2 >= 0) {
                new_s += a[i];
                new_s += a[i - 1];
                new_s += a[i - 2];
                i -= 3;
            } else {
                while (i >= 0) {
                    new_s += a[i];
                    i--;
                }
            }
            res.push_back(new_s);
        }

		
		reverse(res.begin(), res.end());

        for (int i = 0; i < res.size(); i++) {
            reverse(res[i].begin(), res[i].end());
            cout << res[i];
            if (i < res.size() - 1) {
                cout << ".";
            }
        }
        cout << '\n';
    }
    return 0;
}

