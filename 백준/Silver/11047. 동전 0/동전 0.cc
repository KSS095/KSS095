#include <iostream>
using namespace std;

int coin[12];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, K, cnt = 0;
	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		cin >> coin[i];
	}
	int tmp = N;

	while (K) {
		while (K - coin[tmp] >= 0) {
			cnt++;
			K -= coin[tmp];
		}
		tmp--;
	}
	cout << cnt;
}