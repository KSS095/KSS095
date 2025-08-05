#include <iostream>
using namespace std;

int main() {
	int num[5], verif = 0;

	for (int i = 0; i < 5; i++) {
		cin >> num[i];
		verif += num[i] * num[i];
	}
	cout << verif % 10;
}