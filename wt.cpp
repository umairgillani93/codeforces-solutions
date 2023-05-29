#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	vector<int> b(n);
	
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	vector<int> new_v;
	for (int j = 0; j < n; j++) {
		new_v.push_back(abs(a[j] - b[j]));
	}

	for (auto x: new_v) {
		cout << x << " ";
	}
	

	cout << '\n';
	return 0;
		
}
