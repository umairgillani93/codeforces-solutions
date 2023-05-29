#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];	
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < k; i++) {
		if (v[i] + v[i + 1] > v[v.size() -1]) {
			v.erase(v.begin());
			v.erase(v.begin());
		}

		else {
			v.erase(v.begin() + v.size() - 1);
		}
	}

	long long sum = 0;

	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}

	cout << sum << '\n';
	return 0;

	
}

