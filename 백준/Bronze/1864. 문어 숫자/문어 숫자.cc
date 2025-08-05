#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	string str;
	while (getline(cin, str)) {
		if (str == "#") break;

		int sum = 0;

		for (int i = 0; i < str.length(); i++) {
			int oct = (str.length() - 1) - i;

			switch (str[i]) {
			case '-':
				sum += 0;
				break;
			case '\\':
				sum += pow(8, oct);
				break;
			case '(':
				sum += 2 * pow(8, oct);
				break;
			case '@':
				sum += 3 * pow(8, oct);
				break;
			case '?':
				sum += 4 * pow(8, oct);
				break;
			case '>':
				sum += 5 * pow(8, oct);
				break;
			case '&':
				sum += 6 * pow(8, oct);
				break;
			case '%':
				sum += 7 * pow(8, oct);
				break;
			case '/':
				sum -= pow(8, oct);
				break;
			}
		}
		cout << sum << "\n";
	}
}