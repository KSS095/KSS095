#include <iostream>
using namespace std;
int grade[2][6];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, K, S, Y, room = 0;
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> S >> Y;
		if (grade[S][Y] == 0) room++;
		grade[S][Y]++;

		if (grade[S][Y] == K) grade[S][Y] = 0;
	}
	cout << room;
}