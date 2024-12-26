#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        // Frequency array to store occurrences of each character
        vector<int> occ(26, 0);
        for (char c : s) {
            occ[c - 'a']++;
        }
        
        // Find the character with the lowest and highest frequency
        int lowIdx = 0, highIdx = 0;
        for (int i = 1; i < 26; i++) {
            if (occ[i] < occ[lowIdx]) lowIdx = i;
            if (occ[i] > occ[highIdx]) highIdx = i;
        }

        // Replace the character with the lowest frequency with the highest frequency character
        for (int i = 0; i < n; i++) {
            if (s[i] == 'a' + lowIdx) {
                s[i] = 'a' + highIdx;
            }
        }

        cout << s << "\n";
    }
    return 0;
}

