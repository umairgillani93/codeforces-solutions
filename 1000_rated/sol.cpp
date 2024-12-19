#include <bits/stdc++.h>

using namespace std;

string minWindow(string &s, string t) {
	unordered_map<char, int> target;
	unordered_map<char, int> window;

	for (int i = 0; i < t.size(); i++) {
		target[t[i]]++;
	}

	int left = 0;
	int right = 0;
	int min_len = INT_MAX;
	int formed = 0;
	int required = target.size();
	int start = 0;

	while (right < s.size()) {
		char c = s[right];
		window[c]++;

		if (target.count(c) && target[c] == window[c]) {
			formed++;
		}

		while (left <= right && formed == required) {
			// at this point our window contains all the characters in t string

			char temp = s[left];

			if (right - left + 1 < min_len) {
				min_len = right - left + 1;
				start = left;
			}

			window[left]--;

			if (target.count(temp) && window[temp] < target[temp]) {
				formed--;
			}
			left++;

		}
		right++;
	}
	return min_len == INT_MAX ? "" : s.substr(start, min_len);
}

int main() {
	string s = "ADOBECODEBANC";
	string t = "ABC";
	string res =  minWindow(s, t);
	cout << res << '\n';
	return 0;
}

