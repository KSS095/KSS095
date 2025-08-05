#include <iostream>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int A, I;
	cin >> A >> I;
	cout << A * (I - 1) + 1;
}