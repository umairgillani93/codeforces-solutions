#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> alice(3);
	vector<int> bob(3);

	for (int i = 0; i < 3; i++) {
		cin >> alice[i];
	}

	for (int i = 0; i < 3; i++) {
		cin >> bob[i];
	}

	int alice_pts = 0,  bob_pts = 0;

	for (int k = 0; k < 3; k++) {
		if (alice[k] > bob[k]) {
			alice_pts++;
		}

		else if (alice[k] < bob[k]) {
			bob_pts++;
		}

		else {
			continue;
		}
	}

	cout << alice_pts << " " << bob_pts << '\n';
	return 0;

}
