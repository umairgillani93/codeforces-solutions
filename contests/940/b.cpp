#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> sequence(n, 0); 
        
        int remaining = k - n;
        
        for (int i = 0; i < n && remaining > 0; ++i) {
            sequence[i] |= 1;
            remaining--;
        }
        
        if (remaining > 0) {
            for (int i = 30; i >= 0 && remaining > 0; --i) {
                int bit = 1 << i;
                if ((remaining & bit) != 0) { 
                    for (int j = 0; j < n && remaining > 0; ++j) {
                        if ((sequence[j] & bit) == 0) { 
                            sequence[j] |= bit;
                            remaining -= bit;
                        }
                    }
                }
            }
        }
        
        for (int i = 0; i < n; ++i) {
            cout << sequence[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

