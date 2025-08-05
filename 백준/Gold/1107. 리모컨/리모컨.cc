#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<bool> no(10, false);

bool yes(int num) {
	string str = to_string(num);
	
	for (int i = 0; i < str.length(); i++) {
		if (no[str[i] - 48]) return false;
	}
	return true;
}

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int N, M;
	cin >> N >> M;

	string remote_num = to_string(N);
	int Min = abs(N - 100);

	for (int i = 0; i < M; i++) {
		int tmp;
		cin >> tmp;
		no[tmp] = true;
	}

	if (N == 100) {
		cout << 0;
		return 0;
	}

	for (int i = 0; i < 1000001; i++) {
		if (yes(i)) {
			int tmp = abs(N - i) + to_string(i).length();
			Min = min(Min, tmp);
		}
	}
	cout << Min;
}