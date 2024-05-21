#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	vector<int> act_n;
	int N = n + 2;
	for (int i = 2; i < N; i++) {
		act_n.push_back(i);
	}
	bool check = false;
	int ans = 0;
	for (int i = 0; i < act_n.size(); i++) {
		for (int j = 0; j < arr.size(); j++) {
			//cout << act_n[i] << " " << arr[j] << '\n';
			if (act_n[i] == arr[j]) {
				ans++;
				if (ans == 2) {
					check = true;
					break;
				}
			}
		}
		if (check) {
			break;
		}
	}
	cout << ans << '\n';
	return 0;
}
