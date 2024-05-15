#include <bits/stdc++.h>

using namespace std;
/* we have some numbers v = {3,3,3,3};
 * we need to take the min number from vector
 * and substract this min number from each index value
 * and see if we are left with any operations
 */


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
		int mark = 1;
		bool check = false;
		int m= 0;
		vector<int> new_arr;
		
		while (!check) {
			m = arr[0];
			if (m == 1) {
				m = m;
				cout << "min: " <<  m << '\n';
				for (int i = 0; i < arr.size(); i++) {
					int new_val =  arr[i] - m;
					if (new_val > 0) {
						new_arr.push_back(new_val);
					}
				}
				// cout << "mark: " << mark << " new_arr size: " << new_arr.size() << '\n';
				// for (int i = 0; i < new_arr.size(); i++) {
				// 	cout << new_arr[i] << " ";
				// }
				// cout << '\n';
				if (new_arr.size() == 1 && mark % 2 == 0) {
					cout << "Alice" << '\n';
					check = true;
				}
				else {
					mark++;
					arr = new_arr;
				}
			}
			else {
				m = arr[0] - 1;
				cout << "min: " << m << '\n';
				for (int i = 0; i < arr.size(); i++) {
					int new_val =  arr[i] - m;
					if (new_val > 0) {
						new_arr.push_back(new_val);
					}
				}
				// cout << "mark: " << mark << " new_arr size: " << new_arr.size() << '\n';
				// for (int i = 0; i < new_arr.size(); i++) {
				// 	cout << new_arr[i] << " ";
				// }
				// cout << '\n';
				if (new_arr.size() == 1 && mark % 2 == 0) {
					cout << "Alice" << '\n';
					check = true;
				}
				else {
					mark++;
					arr = new_arr;
				}
			}
		}
		cout << "Bob" << '\n';
		
	}

	return 0;
}
