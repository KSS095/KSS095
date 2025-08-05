#include <iostream>
#include <deque>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N;
	deque<int> card;
	cin >> N;

	for (int i = 1; i <= N; i++)
		card.push_back(i);

	while (card.size() != 1) {
		card.pop_front();
		card.push_back(card.front());
		card.pop_front();
	}

	cout << card.front();
}