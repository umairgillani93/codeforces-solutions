#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, k;
	cin >> n >> k;
	vector<int> tickets(n);
	vector<int> customers(k);
	for (int i = 0; i < n; i++) {
		cin >> tickets[i];
	}
	for (int i = 0; i < k; i++) {
		cin >> customers[i];
	}
	sort(tickets.begin(), tickets.end());
	sort(customers.begin(), customers.end());

	for (int i = 0; i < customers.size(); i++) {
		int ans = *lower_bound(tickets.begin(), tickets.end(), customers[i]);
		cout << (ans <= customers[i] ? ans : -1) << '\n';
	}
	return 0;

}
