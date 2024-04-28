#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		vector<string> arr;
		for (int i = 0; i < 3; i++) {
			string s;
			cin >> s;
			arr.push_back(s);
		}

		int row = 0;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < arr[i].size(); j++) {
				if (arr[i][j] == '?') {
					row = i;
					break;
				}
			}
		}


		string comp = "?ABC";
		string new_s = arr[row];
		sort(new_s.begin(), new_s.end());
		
		char ans = '\0';

		for (int i = 0; i < comp.size(); i++) {
			if (comp[i] != new_s[i]) {
				ans = comp[i];
				break;
			}
		}

		cout << ans << '\n';

	}

	return 0;

}

