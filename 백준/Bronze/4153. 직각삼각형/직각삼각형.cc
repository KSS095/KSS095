#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c, m;

	while (cin >> a >> b >> c) {
		if (a == 0 && b == 0 && c == 0) break;

		m = max({ a,b,c });

		if (m == a) {
			if (a * a == b * b + c * c) cout << "right" << "\n";
			else cout << "wrong" << "\n";
		}
		else if (m == b) {
			if (b * b == a * a + c * c) cout << "right" << "\n";
			else cout << "wrong" << "\n";
		}
		else {
			if (c * c == a * a + b * b) cout << "right" << "\n";
			else cout << "wrong" << "\n";
		}
	}
}