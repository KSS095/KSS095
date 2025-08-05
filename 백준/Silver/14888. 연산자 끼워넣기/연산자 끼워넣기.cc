#include <iostream>
#include <algorithm>
using namespace std;

int N, op[4], num[11], Min = 1000000000, Max = -1000000000;
void calc(int idx, int val) {
	if (idx == N) {
		Min = min(Min, val);
		Max = max(Max, val);
		return;
	}

	for (int i = 0; i < 4; i++) {
		if (op[i] == 0) continue;
		op[i]--;

		if (i == 0) calc(idx + 1, val + num[idx]);
		else if (i == 1) calc(idx + 1, val - num[idx]);
		else if (i == 2) calc(idx + 1, val * num[idx]);
		else if (i == 3) calc(idx + 1, val / num[idx]);

		op[i]++;
	}
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> N;
	
	for (int i = 0; i < N; i++) cin >> num[i];
	for (int i = 0; i < 4; i++) cin >> op[i];

	calc(1, num[0]);
	cout << Max << "\n" << Min;
}