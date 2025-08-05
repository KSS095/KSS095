#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int L, arr[50];
	long long sum = 0, M = 1234567891, r;
	char c;
	cin >> L;

	for (int i = 0; i < L; i++) {
		cin >> c;
		arr[i] = c - 96;

		r = 1;
		for (int j = 1; j <= i; j++) {
			r *= 31;
			r %= M;
		}
		sum += arr[i] * r;
		sum %= M;
	}

	cout << sum;
}