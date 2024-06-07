#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int minus = 0;
    int i = 0;
    while (i < k) {
        if (n > 1 && a[0] + a[1] < a[n - 1]) {
            minus += (a[0] + a[1]);
            a.erase(a.begin(), a.begin() + 2); // Remove the first two elements
            n -= 2;
        } else {
            minus += a[n - 1];
            a.pop_back(); // Remove the last element
            n--;
        }
        i++;
    }
    long long res = accumulate(a.begin(), a.end(), 0LL);
    cout << res - minus << '\n';
    return 0;
}

