// no. of subarray with even sum
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	// no. of subarrays with even sum 
	unordered_map<int, int> map;
	map[0] = 1;
	int sum = 0;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];	
		int mod = sum % 2;
		if (map.find(mod) != map.end()) {
			ans += map[mod];
		}
		map[mod]++;
	}
	cout << ans << '\n';
	return 0;
}
