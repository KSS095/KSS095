#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	string str;
	cin >> T;
	cin.ignore();

	for (int i = 0; i < T; i++) {
		int score = 0, acc = 1;
		getline(cin, str);

		for (int j = 0; j < str.length(); j++) {
			if (str[j] == 'O') {
				score += acc;
				acc++;
			}
			else acc = 1;
		}
		cout << score << "\n";
	}
}