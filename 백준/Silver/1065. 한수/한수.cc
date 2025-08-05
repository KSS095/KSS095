#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int cnt = 0;
	string N;
	cin >> N;

	if (N.length() <= 2) cnt = stoi(N);
	else if (N.length() == 3) {
		cnt = 99;
		for (int i = 111; i <= stoi(N); i++) {
			string s = to_string(i);
			if (s[0] - s[1] == s[1] - s[2]) cnt++;
		}
	}
	else cnt = 144;

	cout << cnt;
}