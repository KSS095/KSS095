#include <iostream>
#include <stack>
using namespace std;
int arr[1000001], res[1000001];
stack<int> stk;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;	
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = N - 1; i >= 0; i--) {
		while (!stk.empty() && arr[i] >= stk.top())
			stk.pop();

		res[i] = stk.empty() ? -1 : stk.top();
		stk.push(arr[i]);
	}
	for (int i = 0; i < N; i++)
		cout << res[i] << " ";
}