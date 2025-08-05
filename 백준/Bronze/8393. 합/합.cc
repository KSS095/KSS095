#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
		sum += i;
	cout << sum;
}