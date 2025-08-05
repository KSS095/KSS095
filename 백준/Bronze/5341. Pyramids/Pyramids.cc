#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int tmp;
	while (true) {
		cin >> tmp;
		if (tmp == 0) return 0;

		else {
			int sum = 0;

			for (int i = tmp; i >= 1; i--) {
				sum += i;
			}
			cout << sum << "\n";
		}
	}
}