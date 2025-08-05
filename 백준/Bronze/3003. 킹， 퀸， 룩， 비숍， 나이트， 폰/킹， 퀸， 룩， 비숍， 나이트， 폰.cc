#include <iostream>
using namespace std;

int main() {
	int original[6] = { 1,1,2,2,2,8 };
	int find[6] = { 0, };

	for (int i = 0; i < 6; i++) {
		cin >> find[i];
		cout << original[i] - find[i] << " ";
	}
}