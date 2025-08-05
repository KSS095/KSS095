#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N, K, comb = 0, cnt = 0, div = 0;
	cin >> N >> K;

	while (K != cnt) {
		if (comb == 0) comb = N;
		else comb *= N;

		N = N - 1;
		cnt++;
	}

	for (int i = K; i >= 1; i--) {
		if (div == 0) div = i;
		else div *= i;
	}
	if (K != 0)
		cout << comb / div;
	else cout << 1;
}