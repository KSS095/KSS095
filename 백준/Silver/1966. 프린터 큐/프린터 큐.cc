#include <iostream>
#include <queue>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T, N, M;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int cnt = 0;
		cin >> N >> M;
		queue<pair<int, int>> docu;
		priority_queue<int> priDocu;

		for (int j = 0; j < N; j++) {
			int tmp;
			cin >> tmp;
			docu.push(make_pair(j, tmp));
			priDocu.push(tmp);
		}
	
		while (!docu.empty()) {
			int idx = docu.front().first;
			int value = docu.front().second;
			docu.pop();

			if (priDocu.top() == value) {
				priDocu.pop();
				cnt++;
				if (M == idx) {
					cout << cnt << "\n";
					break;
				}
			}
			else docu.push(make_pair(idx, value));
		}
	}
}