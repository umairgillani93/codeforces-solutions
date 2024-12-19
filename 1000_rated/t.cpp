#include <bits/stdc++.h>

using namespace std;

string minWindow(string s, string t) {
    if (s.empty() || t.empty()) return "";

    unordered_map<char, int> target_count;
    unordered_map<char, int> window_count;

    // Count characters in t
    for (char c : t) target_count[c]++;

    int required = target_count.size();
    int formed = 0;

    int left = 0, right = 0;
    int min_len = INT_MAX;
    int start = 0;

    // Sliding window
    while (right < s.size()) {
        char c = s[right];
        window_count[c]++;

        if (target_count.count(c) && window_count[c] == target_count[c]) {
            formed++;
        }

        while (left <= right && formed == required) {
            char temp = s[left];

            // Update minimum window
            if (right - left + 1 < min_len) {
                min_len = right - left + 1;
                start = left;
            }

            // Shrink the window
            window_count[temp]--;
            if (target_count.count(temp) && window_count[temp] < target_count[temp]) {
                formed--;
            }
            left++;
        }

        right++;
    }

    return min_len == INT_MAX ? "" : s.substr(start, min_len);
}


int main() {
	string t = "ABC";
	string s = "ADOBECODEBANC";
	string res =  minWindow(s, t);
	cout << res << '\n';
	return 0;
}
