#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int N, cnt = 0;
int dx[4] = { 0,0,-1,1 }, dy[4] = { -1,1,0,0 };
char area[101][101];
bool isVisit[101][101] = { false, };

void dfs(int x, int y) {
	isVisit[x][y] = true;

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];

		if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
		if (!isVisit[nx][ny] && area[x][y] == area[nx][ny]) dfs(nx, ny);
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			cin >> area[i][j];
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!isVisit[i][j]) {
				cnt++;
				dfs(i, j);
			}
		}
	}
	cout << cnt << " ";

	cnt = 0;
	memset(isVisit, false, sizeof(isVisit));

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (area[i][j] == 'R') area[i][j] = 'G';
			else area[i][j] = area[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (!isVisit[i][j]) {
				cnt++;
				dfs(i, j);
			}
		}
	}
	cout << cnt;
}