#include <iostream>
#include <set>
using namespace std;

multiset<int> ms;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int T, k;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> k;

		for (int j = 0; j < k; j++) {
			char ch;
			int num;
			cin >> ch >> num;

			if (ch == 'I') ms.insert(num);
			else {
				if (ms.empty()) continue;

				if (num == 1) {
					auto it = ms.end();
					it--;
					ms.erase(it);
				}
				else ms.erase(ms.begin());
			}
		}

		if (ms.empty()) cout << "EMPTY" << "\n";
		else {
			auto it = ms.end();
			it--;
			cout << *it << " " << *ms.begin() << "\n";
		}
		ms.clear();
	}
}