#include <bits/stdc++.h>

using namespace std;

// Bitwise manipulations
void setbit(int &num, int pos) {
    num |= (1 << pos);
}

void toggle(int &num, int pos) {
	// toggle the specified bit
	// if its 1 -> make it 0
	// if its 0 -> make it 1
	/*
	 * A B XOR
	 * 1 1 0
	 * 0 0 1
	 * 1 0 0
	 * 0 1 0
	 */
	num ^= (1 << pos);
}

void unset_bit(int &num, int pos) {
	// unsets the specified postion of the bit
	num &= (~(1 << pos));
}

bool at_pos(int &num, int pos) {
	// if we need to check whether the particular bit is set
	// we can simply take its bitwise '&' and check
	// if the result is 1 it means its set
	// otherwise its the opposite
	return num & (1 << pos);
}

void ones_comp(int &num) {
	num = ~num;
}

void twos_comp(int &num) {
	num = (~num + 1);
}


void strip_lsb(int &num) {
	// strps the lowest set bit of the number
	num = num & (num - 1);

}

int get_lsb(int &num) {
	return num & (-num);
}

void divide_by_2(int &num) {
	num >>= 1;
}

void multiply_by_2(int &num) {
	num <<= 1;
}

int main() {
    //int n, pos;
	int n;
	cin >> n;
	divide_by_2(n);
	cout << n << '\n';
	multiply_by_2(n);
	cout << n << '\n';

    return 0;
}

