#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> coord, rev;
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int tmp;
		cin >> tmp;

		coord.push_back(tmp);
		rev.push_back(tmp);
	}

	sort(coord.begin(), coord.end());
	coord.erase(unique(coord.begin(), coord.end()), coord.end());

	for (int i = 0; i < T; i++)
		cout << lower_bound(coord.begin(), coord.end(), rev[i]) - coord.begin() << " ";
}