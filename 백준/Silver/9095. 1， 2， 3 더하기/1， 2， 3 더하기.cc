#include <iostream>
#include <vector>
using namespace std;

vector<int> sum(12, 0);
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T, n;
	cin >> T;

	sum[1] = 1;
	sum[2] = 2;
	sum[3] = 4;

	for (int i = 4; i < 12; i++) sum[i] = sum[i - 1] + sum[i - 2] + sum[i - 3];

	for (int i = 0; i < T; i++) {
		cin >> n;
		cout << sum[n] << "\n";
	}
}