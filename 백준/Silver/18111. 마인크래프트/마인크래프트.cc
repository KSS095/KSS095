#include <iostream>
using namespace std;

int blk[501][501];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M, B;
	int Time = 0x7f7f7f7f, Height;

	cin >> N >> M >> B;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> blk[i][j];
		}
	}

	for (int i = 0; i <= 256; i++) {
		int add = 0, sub = 0;

		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				int height = blk[j][k] - i;

				if (height > 0) sub += height;
				else if (height < 0) add -= height;
			}
		}

		if (sub + B >= add) {
			int time = 2 * sub + add;

			if (Time >= time) {
				Time = time;
				Height = i;
			}
		}
	}
	cout << Time << " " << Height;
}