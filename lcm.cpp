#include <bits/stdc++.h>
using namespace std;

int num(int x, int y) {
	int n;
	cin >> n;
	for (int i = 1; i < n; i++) {
		for (int j = 2; j < n; j++) {
			if (i + j == n) {
			}
		}
	}
}

int lcm(int x, int y) {
	int lcm;
	int g = 0;

	if (x > y) {
		g = x;
	}
	else {
		g = y;
	}
	while (true) {
		if (g % x == 0 && g % y == 0) {
			lcm = g;
			return lcm;
		}
		else {
			++g;
		}
	}

	return lcm;
}

int main() {
	int x;
	int y; 
	x = 10;
	y = 5;

	cout << lcm(x, y) << '\n';
}
