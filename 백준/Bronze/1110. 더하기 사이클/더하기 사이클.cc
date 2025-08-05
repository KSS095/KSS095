#include <iostream>
using namespace std;

int main() {
	int N, M, a, b, cycle = 0;
	cin >> N;
	M = N;
	while (true) {
		a = N % 10;
		b = ((N / 10) + (N % 10)) % 10;

		cycle++;

		if (M == 10 * a + b) break;
		N = 10 * a + b;
	}
	cout << cycle;
}