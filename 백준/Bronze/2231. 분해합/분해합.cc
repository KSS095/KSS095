#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, sum;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		sum = i;
		int tmp = i;

		while (tmp) {
			sum += tmp % 10;
			tmp /= 10;
		}

		if (N == sum) {
			cout << i;
			return 0;
		}
	}
	cout << "0";
}