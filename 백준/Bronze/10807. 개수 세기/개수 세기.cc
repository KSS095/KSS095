#include <iostream>
using namespace std;

int main() {
	int N, arr[100], cnt = 0, v;
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> arr[i];
	cin >> v;

	for (int i = 0; i < N; i++) {
		if (arr[i] == v)
			cnt++;
	}
	cout << cnt;
}