// Longest substring witht repeating characters
#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    cin >> a;
    unordered_map<char, int> freq;
    int n = a.size();
    int i = 0;
    int ans = INT_MIN;
	int count = 1;

    // Longest substring WITH repeating characters

    for (int j = 0; j < n; j++) {
        freq[a[j]]++;

        while (freq.size() > 1) {
			freq[a[i]]--;
			if (freq[a[i]] == 0) {
				freq.erase(a[i]);
			}
			i++;
		}
		ans = max(ans, j - i + 1);
    }
    cout << ans << '\n';
    return 0;
}
