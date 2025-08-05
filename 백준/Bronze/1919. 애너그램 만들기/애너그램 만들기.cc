#include <iostream>
using namespace std;
int alpha[26];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int cnt = 0;
	string str1, str2;

	cin >> str1 >> str2;

	for (int i = 0; i < str1.length(); i++)
		alpha[str1[i] - 'a']++;
	for (int i = 0; i < str2.length(); i++)
		alpha[str2[i] - 'a']--;

	for (int i = 0; i < 26; i++) {
		if (alpha[i] < 0) cnt -= alpha[i];
		else cnt += alpha[i];
	}

	cout << cnt;
}