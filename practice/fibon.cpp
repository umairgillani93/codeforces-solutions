#include <bits/stdc++.h>

using namespace std;

int fibon(int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	else {
		return fibon(n - 1) + fibon(n - 2);
	}
}

int main() {
	int n = 10;
	int f = fibon(n);
	cout << f << '\n';
	return 0;

}
