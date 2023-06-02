#include <iostream>
#include <time.h>
#include <bits/stdc++.h>

using namespace std;

int LCM(int a, int b)
{
	return (a * b) / __gcd(a, b);
}

void sol() {
	int n;
	cin >> n;
	vector<pair<int, int>> pairs;

	int i = 1;
	int j = n - 1;

	while (i <= j) {
		if (i + j == n) {
			pair<int, int> p;
			p.first = i;
			p.second = j;
			pairs.push_back(p);
			i++;
			j--;

		}

		else {
			i++;
			j--;
		}

	}

	int min_lcm = LCM(pairs[0].first, pairs[0].second);
	int x, y;

	for (int i = 0; i < pairs.size(); i++) {
		int p, q;
		p = pairs[i].first;
		q = pairs[i].second;
		
		int new_lcm;
		new_lcm = LCM(p, q);
	
		//cout << "new lcm: " << new_lcm << " x: " << x << " y: " << y << '\n';
			

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
	//cout << custom_lcm(5, 5) << '\n';
	int t;
	cin >> t;
	while (t--) {
	sol();
	}
	
	return 0;
}

