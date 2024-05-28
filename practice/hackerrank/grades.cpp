#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < arr.size(); i++) {
		if (arr[i] < 38) {
			cout << arr[i] << '\n';
		}
		else {
			int grade = arr[i];
			for (int i = 1; i < 3; i++) {
				int diff = grade + i;
				if (diff % 5 == 0) {
					grade = diff;
					break;
				}
			}
			cout << grade << '\n';
		}
	}
	
	return 0;
}

