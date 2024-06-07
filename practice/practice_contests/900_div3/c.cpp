#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
		long long n, k, x;
		cin >> n >> k >> x;
		long long s_min = k * (k + 1) / 2;
		long long s_max = (n * (n + 1) / 2) - ((n - k) * (n - k + 1) / 2);
		if (x >= s_min && x <= s_max) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
		//if (2 * x >= k * (k + 1) && 2 * x <= n * (n + 1) - (n - k) * (n - k + 1)) {
		//	cout << "YES" << '\n';
		//}
		//else {
		//	cout << "NO" << '\n';
		//}

   }	
    return 0;
}

