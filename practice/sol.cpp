#include <iostream>
#include <vector>
#include <string>
using namespace std;

void solve(int x) {
    vector<int> a;
    while (x > 0) {
        if (x & 1) {
            a.push_back(1);
        } else {
            a.push_back(0);
        }
        x >>= 1;
    }
    int n = a.size();
    cout << n << endl;
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        cin >> x;
        solve(x);
    }
    return 0;
}

