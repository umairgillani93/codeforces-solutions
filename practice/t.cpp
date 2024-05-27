#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

void solve() {
    int n;
    std::cin >> n;
    std::string b;
    std::cin >> b;

    std::vector<int> cnt(26, 0);
    for (char c : b) {
        cnt[c - 'a'] = 1;
    }

    std::string tmp;
    for (int i = 0; i < 26; ++i) {
        if (cnt[i] > 0) {
            tmp += (char)('a' + i);
        }
    }

    std::string a;
    for (char c : b) {
        a += tmp[tmp.size() - 1 - tmp.find(c)];
    }

    std::cout << a << std::endl;
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

