#include <bits/stdc++.h>
using namespace std;

int luckBalance(int k, vector<vector<int>> contests) {
    int sum = 0;
    vector<int> important;

    for (auto &c : contests) {
        int luck = c[0];
        int type = c[1];

        if (type == 0) {
            // always lose unimportant
            sum += luck;
        } else {
            important.push_back(luck);
        }
    }

    // sort important descending
    sort(important.rbegin(), important.rend());

    for (int i = 0; i < important.size(); i++) {
        if (i < k) sum += important[i]; // lose
        else sum -= important[i];       // win
    }

    return sum;
}

int main() {
    vector<vector<int>> contests = {
        {5,1}, {2,1}, {1,1}, {8,1}, {10,0}, {5,0}
    };

    int k = 3;
    cout << luckBalance(k, contests) << endl;
}
