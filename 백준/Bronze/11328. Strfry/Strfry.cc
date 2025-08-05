#include <iostream>
using namespace std;
int alpha[26];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	string str1, str2;

	cin >> N;
	for (int i = 0; i < N; i++) {
		int flag = 0;
		fill_n(alpha, 26, 0);
		cin >> str1 >> str2;

		for (int i = 0; i < str1.length(); i++) {
			alpha[str1[i] - 'a']++;
			alpha[str2[i] - 'a']--;
		}

		for (int i = 0; i < 26; i++) {
			if (alpha[i] != 0) {
				flag++;
				break;
			}
		}
		if (flag) cout << "Impossible" << "\n";
		else cout << "Possible" << "\n";
	}
}