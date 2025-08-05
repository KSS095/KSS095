#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	string str;

	while (getline(cin, str)) {
		int flag = 0;
		stack<char> par;

		if (str == ".") break;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') par.push(str[i]);
			else if (str[i] == ')') {
				if (!par.empty() && par.top() == '(') par.pop();
				else {
					cout << "no" << "\n";
					flag++;
					break;
				}
			}
			else if (str[i] == ']') {
				if (!par.empty() && par.top() == '[') par.pop();
				else {
					cout << "no" << "\n";
					flag++;
					break;
				}
			}
		}

		if (flag == 0) {
			if (!par.empty()) cout << "no" << "\n";
			else cout << "yes" << "\n";
		}
	}
}