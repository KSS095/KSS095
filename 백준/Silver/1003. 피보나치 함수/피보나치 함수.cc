#include <iostream>
using namespace std;

int fibo[41] = { 0,1,1 };

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	for (int i = 3; i < 41; i++)
		fibo[i] = fibo[i - 2] + fibo[i - 1];

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int tmp;
		cin >> tmp;

		if (tmp == 0) cout << "1 0\n";
		else if (tmp == 1) cout << "0 1\n";
		else cout << fibo[tmp - 1] << " " << fibo[tmp] << "\n";
	}
}