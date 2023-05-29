#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void swap(int x, int y) {
	int z;
	z = x;
	x = y;
	y = z;
}

int main() {
	
	int x = 10;
	int y = 20;

	cout << swap(x, y) << '\n';
	//int t;
	//cin >> t;
	//vector<int> v(t);

	//for (int i = 0; i < t; i++) {
	//	cin >> v[i];
	//}
	//
	//// bubble sort algorithm
	//// time complexity O(n^2)
	//// arr = [7, 5, 1, 3, 2]
	////
	//
	//for (int i = 0; i < v.size(); i++) {
	//	for (int j = 0; j < v.size() - 1; j++) {
	//		if (v[j] > v[j + 1]) {
	//			swap(v[j], v[j + 1]);
	//		}
	//	}
	//}

	
	return 0;

}

