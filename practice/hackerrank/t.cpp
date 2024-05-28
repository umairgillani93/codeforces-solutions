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
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 4 ,5};

    // Sort vector b
    sort(b.begin(), b.end());

    int maxDistance = 0;

    // Iterate through each element in vector a
    for (int element : a) {
        int closestElement = findClosestElement(b, element);
        int distance = abs(element - closestElement);

        if (closestElement != b[0]) {
            int lowerElement = b[lower_bound(b.begin(), b.end(), element) - b.begin() - 1];
            distance = min(distance, abs(element - lowerElement));
        }

        if (closestElement != b.back()) {
            int upperElement = b[upper_bound(b.begin(), b.end(), element) - b.begin()];
            distance = min(distance, abs(element - upperElement));
        }

        maxDistance = max(maxDistance, distance);
    }

    cout << "Max distance: " << maxDistance << endl;

    return 0;
}

