#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>

using namespace std;

int main() {
    vector<int> a = {0, 1, 2, 3, 4};
    vector<int> b = {0, 4};

    // Sort vector b
    sort(b.begin(), b.end());

    int maxDistance = 0;

    // Iterate through each element in vector a
    for (int element : a) {
        // Find the closest element using lower_bound
        auto lower = lower_bound(b.begin(), b.end(), element);

        int dist = INT_MAX;

        if (lower != b.end()) {
            dist = min(dist, abs(element - *lower));
        }
        if (lower != b.begin()) {
            dist = min(dist, abs(element - *(lower - 1)));
        }

        maxDistance = max(maxDistance, dist);
    }

    cout << "Max distance: " << maxDistance << endl;

    return 0;
}

