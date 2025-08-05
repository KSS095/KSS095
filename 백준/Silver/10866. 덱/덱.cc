#include <iostream>
#include <sstream>
using namespace std;

class deque {
private:
	int front = 5000;
	int rear = 5000;
	int arr[10000] = { 0, };

public:
	void push_front(int X) {
		arr[--front] = X;
	}

	void push_back(int X) {
		arr[rear++] = X;
	}

	int pop_front() {
		if (empty()) return -1;
		return arr[front++];
	}

	int pop_back() {
		if (empty()) return -1;
		return arr[--rear];
	}

	int size() {
		return rear - front;
	}

	int empty() {
		if (front == rear) return 1;
		return 0;
	}

	int _front() {
		if (empty()) return -1;
		return arr[front];
	}

	int back() {
		if (empty()) return -1;
		return arr[rear - 1];
	}
};

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N, val;
	string str, instr;
	deque deq;

	cin >> N;
	cin.ignore();

	for (int i = 0; i < N; i++) {
		getline(cin, str);
		stringstream ss(str);
		ss >> instr >> val;
		
		if (instr == "push_front") deq.push_front(val);
		else if (instr == "push_back") deq.push_back(val);
		else if (instr == "pop_front") cout<< deq.pop_front() << "\n";
		else if (instr == "pop_back") cout << deq.pop_back() << "\n";
		else if (instr == "size") cout << deq.size() << "\n";
		else if (instr == "empty") cout << deq.empty() << "\n";
		else if (instr == "front") cout << deq._front() << "\n";
		else if (instr == "back") cout << deq.back() << "\n";
	}
}