#include <iostream>
#include <stack>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	long long sum = 0, tmp;
	stack<int> stk;

	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> tmp;

		while (!stk.empty() && stk.top() <= tmp) stk.pop();
		stk.push(tmp);

		sum += stk.size() - 1;
	}
	cout << sum;
}