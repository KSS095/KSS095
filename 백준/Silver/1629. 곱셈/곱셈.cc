#include <iostream>
using namespace std;
long long A, B, C;

long long ABC(long long x, long long y) {
	if (y == 0) return 1;
	if (y == 1) return x;
	if (y % 2 > 0) return x * ABC(x, y - 1);

	long long num = ABC(x, y / 2);
	num %= C;
	return (num * num) % C;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> A >> B >> C;

	cout << ABC(A, B) % C;
}