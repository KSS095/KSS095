#include <iostream>
using namespace std;

int main() {
	int C, N;
	float avg, ratio;
	cin >> C;

	for (int i = 0; i < C; i++) {
		int sum = 0;
		int cnt = 0;
		int score[1000] = { 0, };
		cin >> N;

		for (int j = 0; j < N; j++) {
			cin >> score[j];
			sum += score[j];
		}
		avg = sum / (float)N;

		for (int j = 0; j < N; j++) {
			if (score[j] > avg)
				cnt++;
		}
		ratio = (cnt / (float)N) * 100;

		cout << fixed;
		cout.precision(3);
		cout << ratio << "%\n";
	}
}