#include <bits/stdc++.h>

using namespace std;

int min_operations_to_perfect_square(int n, vector<vector<char>>& matrix) {
    int operations = 0;
    
    for (int i = 0; i < n / 2; ++i) {
        for (int j = 0; j < n / 2; ++j) {
            vector<char> chars = {
                matrix[i][j],                     // Top-left
                matrix[j][n-1-i],                 // Top-right
                matrix[n-1-i][n-1-j],             // Bottom-right
                matrix[n-1-j][i]                  // Bottom-left
            };
            
            map<char, int> counter;
            for (char c : chars) {
                counter[c]++;
            }
            
            int max_frequency = 0;
            for (auto& kv : counter) {
                max_frequency = max(max_frequency, kv.second);
            }
            
            operations += (4 - max_frequency);
        }
    }
    
    return operations;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        vector<vector<char>> matrix(n, vector<char>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> matrix[i][j];
            }
        }
        
        int result = min_operations_to_perfect_square(n, matrix);
        cout << result << endl;
    }
    
    return 0;
}

