#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string j, d;
	cin >> j >> d;
	if (j.size() >= d.size()) cout << "go";
	else cout << "no";
}