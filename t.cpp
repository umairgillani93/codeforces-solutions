#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> a = {2, 1, 3, 2};

	int curr = 1;
	int best = 0;
	int start = 0;
	int end = 0;
	int l = 0;
	for (int r = 1; r < a.size(); r++) {
		if (a[r] == a[r - 1]) {
			curr++;
		}
		else {
			curr = 1;
			l = r;
		}	
		if (curr > best) {
			best = curr;
			start = l;
			end = r;
		}
	}
	cout << start << " " << end << '\n';
	return 0;
}
