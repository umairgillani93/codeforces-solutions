#include <bits/stdc++.h>
using namespace std;

vector<int> test(vector<int> v) {
	vector<int> new_v;
	for (int i = 0; i < v.size(); i++) {
		new_v.push_back(i * i);
	}

	return new_v;
}

int lcm(int x, int y) {
	int lcm;
	int g = 0;
	if (x > y) {
		g = x;
	}
	else
		g = y;
	while (true) {
		if (g % x == 0 && g % y == 0) {
			lcm = g;
			return g;
		}
		else
			++g;
	}

	return lcm;
}

int main() {
	int n;
	int a;
	cin >> n;
	vector<int> nums;
	for (int i = 0; i < n; i++) {
		cin >> a;
		nums.push_back(a);
	}
	vector<int> v{1,3,4};
	cout << lcm(5, 10) << '\n';
	cout << test(v) << '\n';

}
