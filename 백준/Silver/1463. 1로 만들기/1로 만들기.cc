#include <iostream>
using namespace std;

int arr[1000001];
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	for (int i = 2; i <= N; i++) {
		arr[i] = arr[i - 1] + 1;
		if (i % 2 == 0) arr[i] = min(arr[i], arr[i / 2] + 1);
		if (i % 3 == 0) arr[i] = min(arr[i], arr[i / 3] + 1);
	}
	cout << arr[N];
}