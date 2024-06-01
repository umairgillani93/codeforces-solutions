#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, s;
        cin >> n >> k >> s;

        vector<int> arr(n);
        iota(arr.begin(), arr.end(), 1);  // Fill the vector with 1, 2, ..., n
        
        int t = 0; 
        int N = 0;
        bool check = false;
        
        for (int i = arr.size() - 1; i >= 0; i--) {
            t += arr[i];
            N++;
            
            if (t > s) {
                t -= arr[i];
                N--;
            } else if (t == s && N == k) {
                cout << "YES" << '\n';
                check = true;
                break;
            }
        }
        
        if (!check) {
            cout << "NO" << '\n';
        }
    }
    return 0;
}

