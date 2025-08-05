#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> student;
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int number;
		cin >> number;

		student.insert(student.end() - number, i + 1);
	}

	for (int order : student) {
		cout << order << " ";
	}
	cout << "\n";
}