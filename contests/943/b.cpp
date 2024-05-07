#include <bits/stdc++.h>

using namespace std;

bool IsSub(string &x, string &y) {
    // a string y is substring of x or not
    // substring an only be possible if y.size <= x.size
    // let's first calculate y.size()
    // now for each i in x, check indices x[i]... x[i + y.size()]
    // if it's equal to y return true
    // else return false

    int i = 0;
    int start = 0;
    int end = y.size();
    bool ok = false;
    while (i <= x.size() && end <= x.size()) {
        if (x.substr(start, end) == y) {
            ok = true;
            return true;
        }

        else {
            i++;
            start += y.size();
            end += y.size();
        }
    }
    return false;
}

int main() {
	/*
	 * we are given two strings a and b
	 * we need to find the k prefix match of a to b
	 * edge case: if a == b return a.size() or b.size()
	 * else start from a[0], a[1], ... a[n -2]
	 * string new_a would be new_a = a.substr(0, n - 2)
	 * 
	 */
	int t;
	cin >> t;
	while (t--) {
		string a, b;
		cin >> a >> b;
		int ans = 0;

		a = a.substr(0, b.size());
		// we'll first chop of the length of a as a.size() > b.size() is not required in this problem
		// we'll first start with first letter
		// string new_a = a.substr(0, i);
		//
		int best = 0;
		
		for (int i = 0; i <= a.size(); i++) {
			string new_a = a.substr(0, i);
			cout << new_a << '\n';
			if (IsSub(b, new_a)) {
				ans = new_a.size();
				// cout << ans << '\n';
				best = max(ans, best);
			}
		}
		cout << best << '\n';
	}

	return 0;
}

/*
 * in case of random 'a' and 'b' means any string could be greater
 * we'll first check if both of them are equal
 * if they are return a.size()
 * else we'll find the min length string
 * min_ = min(a.size(), b.size())
 * auto Min = [&](string a, string b) {
 *   if a.size() > b.size() {return b}
 *   else return a;
 *   now we'll do rest of logic as it is simply populating which string is minimum
 * that's how it's gonna work for both the strings
 */

