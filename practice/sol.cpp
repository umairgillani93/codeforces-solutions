#include <bits/stdc++.h>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a;
	for (int i = 1; i <= n; i++) {
		a.push_back(i);
	}
	auto Shift = [&](vector<int> &arr) {
		arr[0] = arr[0] | arr[1];
		for (int i = 1; i < arr.size() - 1; i++) {
			arr[i] = arr[i - 1] | arr[i] | arr[i + 1];
		}
		return arr;
	};

	for (int i = 0; i < m; i++) {
		a = Shift(a);	
	}
	for (auto c: a) {
		cout << c << " ";
	}
	cout << '\n';
	//cout << a[n] << '\n';
	
	return 0;
}
