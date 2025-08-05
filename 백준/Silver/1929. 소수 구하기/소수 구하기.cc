#include <iostream>
using namespace std;
int arr[1000000] = { 0, };

int main() {
	int M, N;
	arr[1] = 1;
	cin >> M >> N;

	for (int i = 2; i <= N; i++) {
		for (int j = 2; i * j <= N; j++)
			arr[i * j] = 1;
	}

	for (int i = M; i <= N; i++) {
		if (arr[i] == 0) cout << i << "\n";
	}
}