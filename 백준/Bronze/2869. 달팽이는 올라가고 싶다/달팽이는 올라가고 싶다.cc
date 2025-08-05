#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int up, down, height;
	cin >> up >> down >> height;
	cout << (int)(height - down - 1) / (up - down) + 1;
}