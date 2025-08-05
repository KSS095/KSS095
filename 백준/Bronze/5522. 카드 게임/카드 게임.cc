#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int a[5], sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		sum += a[i];
	}
	cout << sum;
}