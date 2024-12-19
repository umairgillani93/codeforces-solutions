#include <bits/stdc++.h>

using namespace std;

string f(string &s, string &t) {
	unordered_map<char, int> target;
	unordered_map<char, int> window;
	for (int i = 0; i < t.size(); i++) {
		target[t[i]]++;
	}
	
	int formed = 0;
	int req = target.size();
	int start = 0;
	int best = INT_MAX;
	int right = 0;
	int left = 0;

	while (right < s.size()) {
		char c = s[right];
		window[c]++;

		if (target.count(c) && window[c] == target[c]) {
			formed++;
		}
		
		while (left <= right && req == formed) {
			char temp = s[left];
			if (right - left + 1 < best) {
				best = right - left + 1;
				start = left;
			}
			// shrink the window
			window[temp]--;

			if (target.count(temp) && window[temp] < target[temp]) {
				formed--;
			}	
			left++;

		}
		right++;
	}
	return best == INT_MAX ? "" : s.substr(start, best);

}

int main() {
	string s = "ADOBECODEBANC";
	string t = "ABC";

	string res = f(s, t);
	cout << res << '\n';
	return 0;
}
