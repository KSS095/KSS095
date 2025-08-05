#include <iostream>
#include <string>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int res = 0, flag = 0;
	string str, num = "";
	getline(cin, str);

	for (int i = 0; i <= str.size(); i++) {
		if (str[i] == '+' || str[i] == '-' || i == str.size()) {
			if (flag) {
				res -= stoi(num);
			}
			else res += stoi(num);
			num = "";
		}
		else num += str[i];
		if (str[i] == '-') flag++;
	}
	cout << res;
}