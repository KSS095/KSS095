#include <iostream>
using namespace std;
int res(int a, int b) {
	if (a == 0) return b;
	if (b == 1) return 1;
	
	return res(a - 1, b) + res(a, b - 1);
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T, k, n;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int resident = 0;

		cin >> k >> n;
		for (int j = 1; j <= n; j++) resident += res(k - 1, j);
		cout << resident << "\n";
	}
}