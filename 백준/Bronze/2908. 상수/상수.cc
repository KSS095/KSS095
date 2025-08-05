#include <iostream>
#include <string>
using namespace std;

int main() {
	int A, B, rev_A = 0, rev_B = 0;
	cin >> A >> B;

	while (A != 0) {
		rev_A *= 10;
		rev_A += A % 10;
		A /= 10;
	}
	while (B != 0) {
		rev_B *= 10;
		rev_B += B % 10;
		B /= 10;
	}

	int big = rev_A;
	if (rev_A < rev_B)
		big = rev_B;

	cout << big;
}