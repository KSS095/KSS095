#include <iostream>
using namespace std;

int main() {
	int N;
	double M = 0.0, sum = 0.0, avg = 0.0, score[1000] = { 0.0, };
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> score[i];
		if (M < score[i])
			M = score[i];
	}
	for (int i = 0; i < N; i++) {
		score[i] = score[i] / M * 100;
		sum += score[i];
	}
	avg = sum / (double)N;
	cout << fixed;
	cout.precision(3);
	cout << avg;
}