#include <iostream>
#include <stack>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	string in_order, post_order;
	stack<char> stk;

	cin >> in_order;
	for (int i = 0; i < in_order.size(); i++) {
		char c = in_order[i];

		if (c == '+' || c == '-' || c == '*' || c == '/' || c == '(') {
			if (c == '(') stk.push(c);
			else if (c == '*' || c == '/') {
				while (!stk.empty() && (stk.top() == '*' || stk.top() == '/')) {
					post_order += stk.top();
					stk.pop();
				}
				stk.push(c);
			}
			else {
				while (!stk.empty() && stk.top() != '(') {
					post_order += stk.top();
					stk.pop();
				}
				stk.push(c);
			}
		}
		else if (c == ')') {
			while (stk.top() != '(') {
				post_order += stk.top();
				stk.pop();
			}
			stk.pop();
		}
		else post_order += c;
	}

	while (!stk.empty()) {
		post_order += stk.top();
		stk.pop();
	}

	cout << post_order;
}