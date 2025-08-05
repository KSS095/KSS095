#include <iostream>
#include <string>
using namespace std;
string str[50];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++)
		getline(cin, str[i]);

	for (int i = 0; i < str[0].size(); i++) {
		char name = str[0][i];
		for (int j = 0; j < N; j++) {
			if (name != str[j][i]) {
				name = '?';
				break;
			}
		}
		cout << name;
	}
}