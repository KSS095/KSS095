#include <iostream>
using namespace std;

int main() {
	int N, M, num[100], max = 0, sum;
	cin >> N >> M;

	for (int i = 0; i < N; i++)
		cin >> num[i];
	
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				sum = num[i] + num[j] + num[k];
				if (max < sum && sum <= M)
					max = sum;
			}
		}
	}
	cout << max;
}