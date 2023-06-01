#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int i = 0; 
	int j = n - 1;
	while (i <= n / 2 && j >= n / 2) {
		cout << "first: " << v[i] << " second: " << v[j] << '\n';
		i++;
		j--;
	}
	cout << "done " << '\n';
	return 0;
}
