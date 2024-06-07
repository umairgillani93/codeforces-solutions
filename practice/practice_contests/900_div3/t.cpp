#include <iostream>

using namespace std;

int main(){
	int n, k, x;
	cin >> n >> k >> x;
	long long s_min = k * (k + 1) / 2;
	long long s_max = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;
	cout << s_min << '\n';
	cout << s_max << '\n';
	return 0;
}
