#include <iostream>
using namespace std;
int self[10001];

int func(int num) {
	int sum = num;
	while (num != 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	for (int i = 1; i < 10001; i++) {
		if (func(i) <= 10000) self[func(i)] = 1;
		if (!self[i]) cout << i << "\n";
	}
}