#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n; 
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		sort(arr.begin(), arr.end());
		bool chk = true;
		vector<int> new_arr;
		int mark = 0;
		while (!chk) {
			int min = arr[0];
			if (min == 1) {
				for (int i = 0; i < arr.size(); i++) {
					int new_val = arr[i] - min;
					if (new_val > 0) {
						new_arr.push_back(new_val);
						
						}

					if (new_arr.size() == 1 && mark % 2 != 0) {
						cout << "Alice" << '\n';
						chk = false;
					}
					else {
						new_arr = arr;
						mark++;
					}
				}
			}

			else {
				min--;
				for (int i = 0; i < arr.size(); i++) {
					int new_val = arr[i] - min;
					if (new_val > 0) {
						new_arr.push_back(new_val);
						
						}

					if (new_arr.size() == 1 && mark % 2 != 0) {
						cout << "Alice" << '\n';
						chk = false;
					}
					else {
						new_arr = arr;
						mark++;
					}
				}

			}
		}
		cout << "Bob" << '\n';
	}
	return 0;
}

