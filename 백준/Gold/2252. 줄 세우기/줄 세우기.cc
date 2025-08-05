#include <iostream>
#include <queue>
#include <vector>
using namespace std;

queue<int> que;
vector<int> compare[32001];
int inDegree[32001];
int res[32001];

void topSort(int num) {
	for (int i = 1; i <= num; i++) {
		if (inDegree[i] == 0) que.push(i);
	}
	for (int i = 1; i <= num; i++) {
		if (que.empty()) return;

		int tmp = que.front();
		que.pop();

		res[i] = tmp;
		for (int j = 0; j < compare[tmp].size(); j++) {
			int a = compare[tmp][j];

			if (--inDegree[a] == 0) que.push(a);
		}
	}
	for (int i = 1; i <= num; i++) cout << res[i] << " ";
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M;
	cin >> N >> M;

	for (int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;

		compare[x].push_back(y);
		inDegree[y]++;
	}

	topSort(N);
}