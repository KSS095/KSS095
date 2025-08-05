#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N, weight, height, cnt[50];
	fill_n(cnt, 50, 1);

	vector<pair<int, int>> body;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> weight >> height;
		body.push_back(make_pair(weight, height));
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (body[i].first < body[j].first
				&& body[i].second < body[j].second) cnt[i]++;
		}
	}

	for (int i = 0; i < N; i++) {
		cout << cnt[i] << " ";
	}
}