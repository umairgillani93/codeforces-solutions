#include <bits/stdc++.h>

using namespace std;

void sol() {
	int x;
	cin >> x;
	
	vector<int> v(x);
	for (int i = 0; i < x; i++) {
		cin >> v[i];
	}

	if (v[0] % 2 != 0) {
		cout << "YES" << '\n';
		return;
	}

	else {
		for (int i = 0; i < x; i++) {
			if (v[i] % 2 !=0) {
				cout << "NO" << '\n';
				return;
			}

			else {continue;}

		}

		cout << "YES" << '\n';
	}
}

void all_evens(vector<int> &v) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i] % 2 != 0) {
			cout << "NO" << '\n';
			exit(0);
		}
		else {continue;}
	}

	cout << "YES" << '\n';

}

string check_parity(vector<int> &v) {
	string ans;
	for (int i = 1; i < v.size(); i++) {
		if (v[i] % 2 == 0) {
			continue;
		}	

		else {
			ans = "NO";
			return ans;
		}
	}	

	ans = "YES";
	return ans;
}

int main() {
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(0);

	int t;
	cin >> t;
	string ans;

	while (t--) {
		int x;
		cin >> x;
		vector<int> v(x);
		for (int i = 0; i < x; i++) {
			cin >> v[i];
		}

		sort(v.begin(), v.end());
		if (v[0] % 2 != 0) {
			ans = "YES";
		}

		else {
			ans = check_parity(v);
		}

	}

	cout << ans << '\n';

	return 0;

}


// if V[0] % 2 != 0; then 
// print("YES")
// else 
// for each item at index i;
// check if it's even
// if yes, conit
