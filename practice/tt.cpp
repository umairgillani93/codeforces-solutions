#include <bits/stdc++.h>

using namespace std;

int main() {
	int n = 5;
	int k = 3;
	int s_min = k * (k + 1) / 2;
	int s_max = (n * (n - 1) / 2) - ((n - k) * (n - k + 1) / 2);
	cout << s_min << '\n';
	cout << s_max << '\n';
	return 0;
}
		
