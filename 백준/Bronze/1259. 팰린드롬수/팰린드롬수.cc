#include <iostream>
using namespace std;

int main() {
	int n;

	while (cin >> n) {
		if (n == 0) break;
		int r = 0, num = n;

		while (n != 0) {
			r *= 10;
			r += n % 10;
			n /= 10;
		}
		if (num == r) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
}