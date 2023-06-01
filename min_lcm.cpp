#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int LCM(int a, int b)
{
    int greater = max(a, b);
    int smallest = min(a, b);
    for (int i = greater; ; i += greater) {
        if (i % smallest  == 0)
            return i;
    }
}

void sol() {
	int n;
	cin >> n;
	vector<pair<int, int>> pairs;

	int i = 0; 
	int j = n - 1;
	while (i <= n / 2 && j >= n /2) {
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


	//for (int i = 0; i < pairs.size(); i++) {
	//	cout << "first: "  << pairs[i].first << " second: " << pairs[i].second << '\n';
	//}


	//int first = pairs[0].first;
	//int sec = pairs[0].second;
	int min_lcm = LCM(pairs[0].first, pairs[0].second);
	//cout << "first lcm: " << min_lcm<< '\n';

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
