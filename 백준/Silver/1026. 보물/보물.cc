#include <iostream>
#include <queue>
using namespace std;

priority_queue<int> A;
priority_queue<int, vector<int>, greater<int>> B;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, S = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;

		A.push(tmp);
	}

	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;

		B.push(tmp);
	}

	for (int i = 0; i < N; i++) {
		S += A.top() * B.top();
		A.pop();
		B.pop();
	}

	cout << S;
}