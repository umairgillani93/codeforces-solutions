#include <bits/stdc++.h>
using namespace std;

long long sum(long long n) {
    long long s = 0;
    while (n > 0) {
        s += (n % 10);
        n /= 10;
    }
    return s;
}

vector<vector<long long>> f(vector<long long> &arr) {
    vector<vector<long long>> subsets;
    long long n = arr.size();
    for (long long i = 0; i < (1 << n); i++) {
        vector<long long> ss;
        for (long long j = 0; j < arr.size(); j++) {
            if (i & (1 << j)) {
                ss.push_back(arr[j]);
            }
        }
        subsets.push_back(ss);
    }
    return subsets;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		long long n;
		cin >> n;

		if (n % 9 == 0) {
			cout << "YES" << '\n';
			continue;
		}
		long long prev = n;
		vector<long long> values;
		while (n > 0) {
			long long r = n % 10;
			if (r == 2 || r == 3) {
				values.push_back(r);
			}
			n /= 10;
		}
		vector<vector<long long>> res = f(values);
		long long sm = sum(prev);
		bool found = false;

		for (auto &s: res) {
			long long temp = sm;
			for (long long num: s) {
				if (num == 2) {
					temp += 2;
				}
				else if (num == 3) {
					temp += 6;
				}
			}
			if (temp % 9 == 0) {
				found = true;
				break;
			}
		}
		if (found) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
	}
	return 0;
}
