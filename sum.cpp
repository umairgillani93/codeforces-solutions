#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, target;
	cin >> n >> target;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n - 1; j++) {
			if (arr[i] + arr[j] == target) {
				cout << i << " "  << j  << '\n';
				break;
			}
		}
	}

	return 0;
}

