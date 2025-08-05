#include <iostream>
using namespace std;

int main() {
	int N, fact = 1;
	cin >> N;
	for (int i = N; i >= 1; i--)
		fact *= i;

	if (N == 0) fact = 1;
	cout << fact;
}