#include <bits/stdc++.h>
using namespace std;

int main() {
	int x1, v1, x2, v2;
	cin >> x1 >> v1 >> x2 >> v2;

	/*
	 * (x1 + v1) % (x2 + v2) == 0 -> yes
	 * x1 + nv1  = x2 + nv2
	 * x1 - x2 = nv2 - nv1
	 * x1 - x2 = n(v2 - v1)
	 * (x1 - x2) / (v2 - v1) = n
	 * if (x1 - x2) / (v2 - v1) >= 0 && (x1 - x2) % (x2 - x1) == 0 -> yes 
	 * else No
	 */

	if ((x2 - x1) / (v1 - v2) >= 0 && 
			(x2 - x1) % (v1 - v2) == 0) return "YES";
	return "NO";
	
}
