#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	map<string, int> m;
	vector<string> dbj;
	string str;
	int N, M;

	cin >> N >> M;

	for (int i = 0; i < N + M; i++) {
		cin >> str;
		m[str]++;

		if (m[str] > 1) dbj.push_back(str);
	}
	sort(dbj.begin(), dbj.end());
	cout << dbj.size() << "\n";

	for (int i = 0; i < dbj.size(); i++) cout << dbj[i] << "\n";
}