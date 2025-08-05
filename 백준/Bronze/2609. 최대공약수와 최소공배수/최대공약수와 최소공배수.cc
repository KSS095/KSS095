#include <iostream>
using namespace std;

int main() {
	int a, b, gcd = 1, lcm;
	cin >> a >> b;

	int num1 = a > b ? a : b;
	int num2 = a < b ? a : b;
	lcm = num1;

	for (int i = 2; i <= num2; i++) {
		if (num1 % i == 0 && num2 % i == 0)
			gcd = i;
	}

	for (int i = lcm; i <= num1 * num2; i++) {
		if (i % num1 == 0 && i % num2 == 0) {
			lcm = i;
			break;
		}
	}
	cout << gcd << "\n" << lcm;
}