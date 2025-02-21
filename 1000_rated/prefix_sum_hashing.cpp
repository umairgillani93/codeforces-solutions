// subarray that sum upto x using prefix sum with hashing
#include <bits/stdc++.h>

using namespace std;

bool f(vector<int> &arr, int x) {
	set<int> st;
	int sum = 0;

	int n = arr.size();

	for (int i = 0; i < n; i++) {
		sum += arr[i];


		if (sum == x) {
			return true;
		}

		if (st.find(sum - x) != st.end()) {
			return true;
		}

		st.insert(sum);
	}
	return false;
}

int main() {
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bool res = f(a, x);
	cout << res << '\n';
	return 0;

}


