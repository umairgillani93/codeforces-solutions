#include <bits/stdc++.h>

using namespace std;

vector<string> decode_strings(int t, vector<pair<int, string>>& test_cases) {
    vector<string> results;
    
    while (t--) {
        int n = test_cases[t].first;
        string b = test_cases[t].second;
        
        set<char> distinct_chars_set(b.begin(), b.end());
        vector<char> distinct_chars(distinct_chars_set.begin(), distinct_chars_set.end());
        
        string r(distinct_chars.begin(), distinct_chars.end());
        int r_len = r.length();
        
        map<char, char> decode_map;
        for (int i = 0; i < r_len; ++i) {
            decode_map[r[i]] = r[r_len - 1 - i];
        }
        
        string s;
        for (char c : b) {
            s.push_back(decode_map[c]);
        }
        
        results.push_back(s);
    }
    
    reverse(results.begin(), results.end());

    return results;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    vector<pair<int, string>> test_cases(t);
    for (int i = 0; i < t; ++i) {
        int n;
        string b;
        cin >> n >> b;
        test_cases[i] = make_pair(n, b);
    }
    
    vector<string> results = decode_strings(t, test_cases);
    
    for (const string& result : results) {
        cout << result << '\n';
    }
    
    return 0;
}

