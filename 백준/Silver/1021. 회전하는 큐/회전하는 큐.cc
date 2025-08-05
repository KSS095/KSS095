#include <iostream>
#include <deque>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, M, tmp, cnt = 0;
	int L, R;
	deque<int> deq;

	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		deq.push_back(i);

	for (int i = 0; i < M; i++) {
		cin >> tmp;
		
		for (int i = 0; i < N; i++) {
			if (tmp == deq[i]) {
				L = i;
				R = deq.size() - i;
				break;
			}
		}

		if (L <= R) {
			while (true) {
				if (tmp == deq.front()) break;

				cnt++;
				deq.push_back(deq.front());
				deq.pop_front();
			}
			deq.pop_front();
		}
		else {
			cnt++;

			while (true) {
				if (tmp == deq.back()) break;

				cnt++;
				deq.push_front(deq.back());
				deq.pop_back();
			}
			deq.pop_back();
		}
	}

	cout << cnt;
}