#include <bits/stdc++.h>

using namespace std;

int Rec(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n + Rec(n - 1);
	}
}

int main() {
	
	int n = 10;
	int rec = Rec(n);
	cout << rec << '\n';
	return 0;
}
