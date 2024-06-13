#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, t;
	cin >> n >> t;;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	// two-pass hash table
	unordered_map<int, int> hash;
	for (int i = 0; i < a.size(); i++) {
		hash[a[i]] = i;
	}

	for (int i = 0; i < a.size(); i++) {
		int comp = t - a[i];
		if (hash.find(comp) != hash.end() && hash[comp] != i) {
			cout << i << " " << hash[comp] << '\n';
			break;
		}
	}
	return 0;

}
