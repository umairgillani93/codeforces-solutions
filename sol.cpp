#include <bits/stdc++.h>
using namespace std;

//void f(vector<int> &arr, int start, vector<int> &t, vector<vector<int>> &res) {
//    if (t.size() == 3) {
//        res.push_back(t);
//        return;
//    }
//    for (int i = start; i < arr.size(); i++) {
//        //if (i > start && arr[i] == arr[i - 1]) continue; 
//        t.push_back(arr[i]);
//        f(arr, i + 1, t, res);
//        t.pop_back(); 
//    }
//}

int main() {
    vector<int> arr(6);
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end()); 

    set<vector<int>> res;
    vector<int> t;

	for (int i = 0; i < (1 << 6); i++) {
		vector<int> subset;
		for (int j = 0; j < 6; j++) {
			if (i & (1 << j)) {
				subset.push_back(arr[j]);
			}
		}
		if (subset.size() == 3) {
			res.insert(subset);
		}
	}

	int n = res.size();

	//for (auto &s: res) {
	//	for (int c: s) {
	//		cout << c << " ";
	//	}
	//	cout << '\n';
	//}

	unordered_map<int, int> freq;
	for (const auto &s: res) {
		int sum = accumulate(s.begin(), s.end(), 0);

		freq[sum]++;

		if (freq[sum] > 1) {
			cout << "YES" << '\n';
			return 0;
				
		}
	}
	
	cout << "NO" << '\n';

	return 0;
}
