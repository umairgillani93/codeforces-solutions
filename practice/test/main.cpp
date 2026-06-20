#include <bits/stdc++.h>
using namespace std;

vector<int> getRemovableIndices(string str1, string str2) {
    vector<int> res;
    string actual = str1;
    for (int i = 0; i < str1.length(); i++) {
					str1.erase(str1.begin() + i);
					cout << "removal index: " << i << str1 << " " << str2 << '\n';
					if (str1 == str2) res.push_back(i);
					str1 = actual;
    }
    return res;
}

int main() {
	string str1 = "aabbb";
	string str2 = "aabb";
	vector<int> ans = getRemovableIndices(str1, str2);
	for (auto &s: ans) cout << s << '\n';
	return 0;

}
