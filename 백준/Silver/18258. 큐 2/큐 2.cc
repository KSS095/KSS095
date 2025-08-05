#include <iostream>
#include <queue>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

    int N;
	queue<int> que;
	string instr;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> instr;
		if (instr == "push") {
			int num;
			cin >> num;
			que.push(num);
		}
		else if (instr == "pop") {
			if (que.empty()) cout << -1 << '\n';
			else {
				cout << que.front() << '\n';
				que.pop();
			}
		}
		else if (instr == "size") {
			cout << que.size() << '\n';
		}
		else if (instr == "empty") {
			cout << (int)que.empty() << '\n';
		}
		else if (instr == "front") {
			if (que.empty()) cout << -1 << '\n';
			else cout << que.front() << '\n';
		}
		else if (instr == "back") {
			if (que.empty()) cout << -1 << '\n';
			else cout << que.back() << '\n';
		}
	}
}