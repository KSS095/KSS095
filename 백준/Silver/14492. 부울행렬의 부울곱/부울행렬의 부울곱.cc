#include <iostream>
using namespace std;
int A[301][301];
int B[301][301];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, cnt = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> A[i][j];

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> B[i][j];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			for (int n = 0; n < N; n++) {
				if (A[i][n] && B[n][j]) {
					cnt++;
					break;
				}
			}
	}

	cout << cnt;
}