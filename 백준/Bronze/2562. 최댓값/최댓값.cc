#include <iostream>
using namespace std;

int main() {
	int arr[9] = { 0, }, max = 0, idx;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		if (max < arr[i]) {
			max = arr[i];
			idx = i + 1;
		}
	}
	cout << max << "\n" << idx;
}