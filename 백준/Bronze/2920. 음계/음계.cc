#include <iostream>
using namespace std;

int main() {
	int num[8], flag = 0;
	for (int i = 0; i < 8; i++)
		cin >> num[i];

	if (num[0] == 1) {
		for (int i = 1; i < 7; i++) {
			if (num[i] + 1 != num[i + 1])
				flag++;
		}
		if (!flag) cout << "ascending";
		else cout << "mixed";
	}

	else if (num[0] == 8) {
		for (int i = 1; i < 7; i++) {
			if (num[i] - 1 != num[i + 1])
				flag++;
		}
		if (!flag) cout << "descending";
		else cout << "mixed";
	}

	else cout << "mixed";
}