#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, arr[1000], sum = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	sort(arr, arr + N);

	for (int i = 0; i < N; i++) {
		int part_sum = 0;
		for (int j = 0; j <= i; j++)
			part_sum += arr[j];
		sum += part_sum;
	}

	cout << sum;
}