#include <iostream>
#include <queue>
using namespace std;

struct comp {
	bool operator()(int x, int y) {
		if (abs(x) == abs(y)) {
			if (x > y) return x > y;
			else x < y;
		}
		return abs(x) > abs(y);
	}
};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	priority_queue<int, vector<int>, comp> priorQ;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		
		if (x != 0) priorQ.push(x);
		else {
			if (priorQ.empty()) {
				cout << "0" << "\n";
				continue;
			}
			cout << priorQ.top() << "\n";
			priorQ.pop();
		}
	}
}