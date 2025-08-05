#include <iostream>
#include <string>
using namespace std;
int num[10];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;

	string s = to_string(N);
	for (char c : s)
		num[c - '0']++;

	int max = num[0];
	for (int i = 1; i < 10; i++) {
		if (i == 6 || i == 9) continue;
		if (max < num[i]) max = num[i];
	}
	if (max < (num[6] + num[9] + 1) / 2) max = (num[6] + num[9] + 1) / 2;

	cout << max;
}