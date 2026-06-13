#include <bits/stdc++.h>
using namespace std;

int main() {
	string s1 = "anagram";
	string s2 = "nagaram";

	if (s1.length() != s2.length()) {
		printf("Not anagrams\n");
		return 0;
	}
	
	sort(s1.begin(), s1.end());
	sort(s2.begin(), s2.end());

	if (s1 == s1) {
		printf("valid anagrams\n");
	}
	else {
		printf("Not valid anagrams\n");
	}
	return 0;
}
