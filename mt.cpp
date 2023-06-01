#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<pair<int, int>> p{{1,4}, {2,3}, {3,2}, {4,1}};

	int p_lcm = lcm(p[0].first, p[0].second);
	int x = 0;
	int y = 0;
	
	for (int i = 0; i < p.size(); i++) {
		int new_lcm = lcm(p[i].first, p[i].second);
		cout << "new lcm: " << new_lcm << '\n';

		if (new_lcm <= p_lcm) {
			x = p[i].first;
			y = p[i].second;
		}

		else {continue;}

	}

	cout << p_lcm << '\n';
	cout << "x is: " << x << " y is: " << y << '\n';


	return 0;
}
