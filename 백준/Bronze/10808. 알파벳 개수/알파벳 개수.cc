#include <iostream>
using namespace std;
int alpha[26];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
		alpha[str[i] - 'a']++;

	for (int i = 0; i < 26; i++)
		cout << alpha[i] << " ";
}