#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int max(vector<int> &arr) {
	int max_num = arr[0];
	for (int i = 1; i < arr.size(); i++) {
		if (arr[i] > max_num) {
			max_num = arr[i];
		}
		else {continue;}
	}

	return max_num;
}

long long sum(vector<int> &v) {
	long long s = 0;
	for (int i = 0; i < v.size(); i++) {
		s += v[i];
	}

	return s;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> arr(n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr.begin(), arr.end());

	cout << "sorted intial array: " << '\n';
	for (int it = 0; it < arr.size(); it ++) {
		cout << arr[it] << " ";
	}
	cout << '\n';


	for (int it = 0; it < k; it++) {
		if ((arr[0] + arr[1]) < max(arr)) {
			arr.erase(arr.begin());
			arr.erase(arr.begin());

			for (int i = 0; i < arr.size(); i++) {
				cout << arr[i] << " ";
			}
		cout << '\n';
		}


		else {
			arr.erase(arr.begin() + arr.size() - 1);
			
			for (int i = 0; i < arr.size(); i++) {
				cout << arr[i] << " ";
			}
		}
	}

	cout << '\n';
	long long s = 0;
	s = sum(arr);
	cout << '\n';
	cout << "sum is: " <<  s << '\n';


	return 0;
}
