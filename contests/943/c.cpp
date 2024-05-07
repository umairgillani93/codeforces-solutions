#include <iostream>
#include <vector>

using namespace std;

vector<int> find_a(int n, vector<int>& x) {
    vector<int> a(n);
    a[0] = 1; 
    for (int i = 1; i < n; i++) {
        a[i] = (x[i - 1] + 1) * a[i - 1] / x[i - 1];
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> x(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> x[i];
        }

        vector<int> a = find_a(n, x);

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

