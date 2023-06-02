#include<bits/stdc++.h>

using namespace std;

int main(){
	vector<int> a {1, 3, 5, 3, 9};
	vector<int> b {2, 5, 11, 2, 4};
	
	b.erase(b.begin());
	
	for (auto x: b) {
		cout << x << " ";
	}

	

	return 0;
		
}
