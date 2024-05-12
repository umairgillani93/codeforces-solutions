#include <bits/stdc++.h>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;
	string x_new = to_string(x);
	string y_new = to_string(y);
	
	if (to_string(x).size() == 1) {
		cout << y << '\n';
		cout << x << '\n';
	}

	for (int i = 0; i < x_new.siz(); i++) {
		if ((9 - stoi(x_new[i])) > (9 - stoi(y_new[i]))) {
			x_new[i] = y_new[i];
		}
		else {continue;}
	}
	cout << x_new[i] << '\n';
	cout << y_new[i] << '\n';
	return 0;
}
