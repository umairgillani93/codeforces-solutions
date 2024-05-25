#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int b = 0;
	vector<int> arr;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') {
            b++;
        }
        else {
            b--;
        }
		arr.push_back(b);
    }
	int l = s.length() - 1;
	arr.erase(arr.begin() + l);
	arr.insert(arr.begin() + 0, 0);
	
	 //for (auto c: arr) {
	 //	cout << c << " ";
	 //}
	 //cout << '\n';

	vector<pair<int, int>> res;
	for (int i = 0; i < s.length(); i++) {
		pair<int, int> p;
		p.first = arr[i];
		p.second = i + 1;
		res.emplace_back(p);
	}
	sort(res.begin(), res.end(), [&](pair<int, int> &a, pair<int, int> &b) {
			return a.first < b.first;
			});

	for (auto it = res.begin(); it != res.end(); it++) {
		cout << it -> first << " " << it -> second << '\n';
	}


    return 0;
}

