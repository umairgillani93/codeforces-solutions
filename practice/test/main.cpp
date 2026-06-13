#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//vector<int> pref(n, 0);
	//pref[0] = a[0];
	//for (int i = 0; i < n; i++) {
	//	pref[i] = pref[i-1] + a[i];
	//}

	//int curr = 0, best = 0;
	//for (int i = 0; i < n; i++) {
	//	for (int j = i; j < n; j++) {
	//		if (pref[j] - pref[i - 1] == k) {
	//			curr = j - (i - 1);
	//			best = max(best, curr); 
	//		} 
	//	} 
	//} 
	//cout << best << '\n';

	/*
	 * max(pref[j] - pref[i-1] == k)
	 */
	
	unordered_map<int, int> freq;

	int count = 0, curr = 0;
	freq[0] = 1;
	for (int i = 0; i < n; i++) {
		curr += a[i];
		if (freq.count(curr - k)) {
			// somhow take the len like len = j - i;
			freq[len]++;
		}
	}
	// fianally take the max of lenths added
	// int ans = max(freq);
	// cout << ans << '\n';
	
	return -1;
}
