#include <iostream>
#include <algorithm>
using namespace std;

long long K, N, length, list[10001];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	long long m = 0;
	cin >> K >> N;

	for (int i = 0; i < K; i++){
		cin >> list[i];
		m = max(m, list[i]);
	}

	long long left = 1, right = m, mid;

	while (left <= right){
		mid = (left + right) / 2;

		long long now = 0;

		for (int i = 0; i < K; i++) now += list[i] / mid;

		if (now >= N) {
			left = mid + 1;
			length = max(length, mid);
		}

		else right = mid - 1;
	}
	cout << length;
}