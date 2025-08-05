#include <iostream>
#include <sstream>
using namespace std;

class ArrayStack {
private:
	static const int MSS = 10000;
	int arr[MSS] = { 0, };
	int size = 0;

public:
	ArrayStack() {}

	void push(int val) {
		arr[size++] = val;
	}

	void pop() {
		if (empty()) cout << -1 << "\n";
		else cout << arr[--size] << "\n";
	}

	int Size() {
		return size;
	}

	int empty() {
		if (size == 0) return 1;
		return 0;
	}

	void top() {
		if (empty()) cout << -1 << "\n";
		else cout << arr[size - 1] << "\n";
	}
};

int main() {
	int N, val;
	string str, instr;
	ArrayStack AS;
	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++) {
		getline(cin, str);
		stringstream ss(str);
		ss >> instr >> val;

		if (instr == "push") AS.push(val);
		else if (instr == "pop") AS.pop();
		else if (instr == "size") cout << AS.Size() << "\n";
		else if (instr == "empty") cout << AS.empty() << "\n";
		else AS.top();
	}
}