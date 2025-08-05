#include <iostream>
using namespace std;
int coord[4], arr[1025][1025];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M, tmp;
	int big, small1, small2, dup;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> tmp;
			arr[i][j] = tmp;
		}
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++)
			arr[i][j] += arr[i - 1][j];
	}

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++)
			arr[i][j] += arr[i][j - 1];
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> tmp;
			coord[j] = tmp;
		}

		big = arr[coord[2]][coord[3]];
		small1 = arr[coord[0] - 1][coord[3]];
		small2 = arr[coord[2]][coord[1] - 1];
		dup = arr[coord[0] - 1][coord[1] - 1];
		cout << big - small1 - small2 + dup << "\n";
	}
}