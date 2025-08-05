#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	int N;
	string str;
	stack<char> par;
	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++) {
		int flag = 0;
		while (!par.empty()) par.pop();

		getline(cin, str);
		for (int j = 0; j < str.length(); j++) {
			if (str[j] == '(') par.push(str[j]);
			else {
				if (!par.empty()) par.pop();
				else {
					cout << "NO" << "\n";
					flag++;
					break;
				}
			}
		}
		if (!flag) {
			if (par.empty()) cout << "YES" << "\n";
			else cout << "NO" << "\n";
		}
	}
}