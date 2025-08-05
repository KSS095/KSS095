#include <iostream>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	cout << A + B << "\n";
	cout << A - B << "\n";
	cout << A * B << "\n";
	if (B != 0)
		cout << A / B << "\n";
	cout << A % B;
}