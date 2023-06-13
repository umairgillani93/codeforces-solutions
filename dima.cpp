#include <bits/stdc++.h>

using namespace std;

void sol() {
	int n, k, q;
	cin >> n >> k >> q;

	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());

	int j = a.size() - 1;

	int ans;
	if (a[j] > q) {
		ans = 0;
		cout << ans << '\n';
	}

	if (a[j] == q) {
		ans = 1;
		cout <<< ans << '\n';
	}
	
	j--;
	else {
		if (a[j] <= q) {
			int l = 0;
			for (int i = 0; i < j; i++) {
				l++;
			}

			cout << l << '\n';
		}

		else {
			j--;
		}
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		sol();
	}
	return 0;

}



// n = 3;
// k = 1; max consequtive days
// q = 15; max temp afforded
// A = [-10, 5, 0]
//
// if q > A[n];
// return count of all pairs
//
// else if q == A[n];
// q = 0;
// return 1;
// else (q < A[n]) {
// q--;
// if (q > 
//
// }
//
