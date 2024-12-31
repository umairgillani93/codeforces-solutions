#include <bits/stdc++.h>

using namespace std;

long long sum(int n) {
    long long s = 0;
    while (n > 0) {
        s += (n % 10);
        n /= 10;
    }
    return s;
}

vector<vector<int>> f(vector<int> &arr) {
	vector<vector<int>> f;
	int n = arr.size();
	for (int i = 0; i < (1 << n); i++) {
		vector<int> ss;
		for (int j = 0; j < arr.size(); j++) {
			if (i & (1 << j) ) {
				ss.push_back(arr[j]);
			}
		}
		f.push_back(ss);
	}
	return f;
}


int main() {
	long long 
	return 0;
}
