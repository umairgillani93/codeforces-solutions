#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> v {1,2,3,4,5};
	int q = 2;

	sort(v.begin(), v.end());
	int len = v.size();

	for (int j = v.size() - 1; j >= 0; j--) {
		if (v[j] > q) {
			len--;
		}

		else {
			cout << len << '\n';
			break;
		}
	}

	return 0;
}
