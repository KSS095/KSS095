#include <iostream>
using namespace std;

int main() {
	int cnt[26] = { 0, }, max = 0, flag = 0, idx;
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] < 97) cnt[str[i] - 65]++;
		else cnt[str[i] - 97]++;
	}
	for (int i = 0; i < 26; i++) {
		if (max < cnt[i]) {
			max = cnt[i];
			idx = i;
		}
	}
	for (int i = 0; i < 26; i++) {
		if (max == cnt[i]) flag++;
	}

	if (flag > 1) cout << "?";
	else cout << (char)(idx + 65);
}