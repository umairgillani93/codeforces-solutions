#include <bits/stdc++.h>

using namespace std;

int custom_lcm(int x, int y) {
	int min_num = min(x, y);
	int p_lcm = 0;

	for (int i = min_num; i > 0 ; i--) {
		if (x % i == 0 && y % i == 0) {
			p_lcm = i;
			break;
		}
		else {
			continue;
		}
	}
	if (p_lcm == 1) {
		return x * y;
	}

	else {
		return p_lcm;
	}	

}
void sol() {
	int n;
	cin >> n;
	vector<pair<int, int>> pairs;

	for (int i = 1; i < n; i++) {
		for (int j = 1; j < n; j++) {
			if (i + j == n) {
				pair<int, int> p;
				p.first = i;
				p.second = j;
				pairs.push_back(p);
			}

			else {continue;}
		}
	}

	//for (int i = 0; i < pairs.size(); i++) {
	//	cout << "first: "  << pairs[i].first << " second: " << pairs[i].second << '\n';
	//}


	//int first = pairs[0].first;
	//int sec = pairs[0].second;
	int min_lcm = custom_lcm(pairs[0].first, pairs[0].second);
	//cout << "first lcm: " << min_lcm<< '\n';

	int x, y;
	for (int i = 0; i < pairs.size(); i++) {
		int p, q;
		p = pairs[i].first;
		q = pairs[i].second;
		
		int new_lcm;
		new_lcm = custom_lcm(p, q);
		cout << "new lcm: " << new_lcm << '\n';
			

		if (new_lcm <= min_lcm) {
			min_lcm = new_lcm;
			x = p;
			y = q;
		}	

		else {continue;}
	}

	cout << x << " " << y << '\n';

}

int main() {
	cout << custom_lcm(5, 5) << '\n';
	//int t;
	//cin >> t;
	//while (t--) {
	//sol();

	//}
	return 0;
}
