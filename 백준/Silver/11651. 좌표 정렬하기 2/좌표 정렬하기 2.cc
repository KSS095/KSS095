#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) return a.first < b.first ? true : false;
	return a.second < b.second ? true : false;
}

int main() {
	vector<pair<int, int>> coord;
	int N, x, y;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		coord.push_back(make_pair(x, y));
	}

	sort(coord.begin(), coord.end(), cmp);

	for (auto a : coord)
		cout << a.first << " " << a.second << "\n";
}