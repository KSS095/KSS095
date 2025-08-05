#include <iostream>
using namespace std;

int main() {
	int num, cnt[42] = { 0, }, count = 0;

	for (int i = 0; i < 10; i++) {
		cin >> num;
		cnt[num % 42]++;
	}
	for (int i = 0; i < 42; i++) {
		if (cnt[i] >= 1) count++;
	}
	cout << count;
}