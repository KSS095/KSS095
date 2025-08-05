#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	int mul5 = N / 5;
	int mul25 = N / 25;
	int mul125 = N / 125;

	cout << mul5 + mul25 + mul125;
}