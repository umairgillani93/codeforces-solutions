#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// we need to find all the sub-arrays having sum = k
	// first we'll find the sum-arrays and build sum upto k
	// once it's = k, we're gonna raise the count to 1
	// and we'll do this till the last iteration
	
	//vector<int> pref(n, 0);
	//pref[0] = a[0];
	//for (int i = 1; i < n; i++) {
	//	//printf("%d, %d\n",  pref[i - 1], a[i]);
	//	pref[i] = (pref[i - 1] + a[i]);
	//}

	//for (auto &s: pref) {
	//	cout << s << '\n';
	
	unordered_map<int, int> freq;
	int curr = 0, count = 0;
	freq[0] = 1; // before we start prefix sum = 0
	
	for (int i = 0; i < n; i++) {
		curr += a[i];
		if (freq.count(curr - k)) {
			count += freq[curr - k];
		}
		freq[curr]++;
	}
	cout << count << '\n';
	
	return 0;
}
