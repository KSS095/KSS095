#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <deque>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int T, n, flag = 0;
	bool reverse = false;
	deque<string> deq;
	string p, str, num;

	cin >> T;
	cin.ignore();

	for (int i = 0; i < T; i++) {
		getline(cin, p);
		cin >> n;
		cin.ignore();

		getline(cin, str);
		str.erase(0, 1);
		str.pop_back();

		stringstream ss(str);
		while (getline(ss, num, ',')) deq.push_back(num);

		for (int j = 0; j < p.size(); j++) {
			if (p[j] == 'R') {
				if (reverse) reverse = false;
				else reverse = true;
			}
			else {
				if (deq.empty()) {
					cout << "error" << "\n";
					flag++;
					break;
				}

				if (reverse) deq.pop_back();
				else deq.pop_front();
			}
		}

		if (flag) flag = 0;
		else {
			cout << "[";
			if (!reverse) {
				while (!deq.empty()) {
					cout << deq.front();

					if (deq.size() != 1)cout << ",";
					deq.pop_front();
				}
			}
			else {
				while (!deq.empty()) {
					cout << deq.back();

					if (deq.size() != 1) cout << ",";
					deq.pop_back();
				}
			}
			cout << "]" << "\n";
		}
		deq.clear();
		reverse = false;
	}
}