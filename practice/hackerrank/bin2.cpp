#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int findClosestElement(const vector<int>& b, int element) {
    int left = 0, right = b.size() - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (b[mid] == element) {
            return element;
        } else if (b[mid] < element) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return b[left];
}

int main() {
    vector<int> a = {0, 1, 2, 3, 4};
    vector<int> b = {0, 4};

	for (int i = 0; i < a.size(); i++) {
		int res = findClosestElement(b, a[i]);
		cout << res << '\n';
	}
	return 0;
}
