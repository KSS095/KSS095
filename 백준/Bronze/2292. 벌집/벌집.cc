#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, cnt = 0;
	cin >> N;

	if (N == 1) cnt++;
	else {
		for (int i = 2; i <= N; cnt++)
			i += 6 * cnt;
	}

	cout << cnt;
}