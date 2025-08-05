#include <iostream>
#include <algorithm>
using namespace std;

int N, cost[1001][3], Min[1001][3];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 3; j++) cin >> cost[i][j];
	}

	for (int i = 1; i <= N; i++) {
		Min[i][0] = min(Min[i - 1][1], Min[i - 1][2]) + cost[i][0];
		Min[i][1] = min(Min[i - 1][0], Min[i - 1][2]) + cost[i][1];
		Min[i][2] = min(Min[i - 1][0], Min[i - 1][1]) + cost[i][2];
	}

	cout << min({ Min[N][0], Min[N][1], Min[N][2] });
}