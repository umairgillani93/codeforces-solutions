#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		string s;
		cin >> s;
		vector<int> cnt(26, 0);
		int temp = 0;
		int ans = 0;
		for (int i = 0; i < n; i++) {
			temp += cnt[s[i] - 'a']++ == 0;
			ans += temp;
		}
		/*
		 * temp is let's say you have an array 
		 * and for each prefix you wanna see how many 
		 * characters are distinct
		 * you can just write
		 * temp = count[s[i] - 'a']++ == 0;
		 * thi above line will give you a number that show distinct characters in each
		 * prefix of the string 
		 */
		cout << ans << '\n';
	}
	return 0;
}
