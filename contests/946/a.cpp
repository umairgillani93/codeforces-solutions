#include <iostream>
#include <vector>
#include <algorithm> // For std::max_element


int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];

    for (int i = 1; i < n - 1; ++i) {
        auto maxIt = std::max_element(arr.begin() + 1, arr.end() - 1);
        int maxIndex = std::distance(arr.begin(), maxIt);
        std::cout << maxIndex << std::endl;
    }

    return 0;
}

