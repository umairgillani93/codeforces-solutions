#include <bits/stdc++.h>

using namespace std;

long long bigSum(vector<long long> &arr) {
	long long sum = 0;

	for (int i = 0; i < arr.size(); i++) {
		sum += arr[i];
	}

	return sum;
}

int main() {
	int n;
	cin >> n;
	vector<long long> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];

	}

	//cout << bigSum(arr) << '\n';

	auto big_sum = [&](vector<long long> &arr) {
		long long sum = 0;
		for (int i = 0; i < arr.size(); i++) {
			sum += arr[i];
		}

		return sum;
	};

	cout << big_sum(arr) << '\n';

	return 0;

}

